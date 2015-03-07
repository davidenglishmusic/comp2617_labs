#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <iomanip>
using namespace std;

const int ROLL_NUMBER = 21;
const int NUMBER_OF_GAMES = 1000;

unsigned int rollDice(); // rolls dice, calculates and displays sum
void printTotals(const array<int, ROLL_NUMBER> &, const array<int, ROLL_NUMBER> &, int); // prints out the statistics

int main()
{
   array<int, ROLL_NUMBER> wins = {0};
   array<int, ROLL_NUMBER> losses = {0};

   enum Status { CONTINUE, WON, LOST };

   srand( static_cast<unsigned int>( time( 0 ) ) );

   int totalRoles = 0;

   int totalWins = 0;
   int totalLosses = 0;

   for(int counter = 0; counter < NUMBER_OF_GAMES; counter++)
   {
     int roleCounter = 1;

     unsigned int myPoint = 0;
     Status gameStatus = CONTINUE;
     unsigned int sumOfDice = rollDice();

     switch ( sumOfDice )
     {
        case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll
           gameStatus = WON;
           break;
        case 2: // lose with 2 on first roll
        case 3: // lose with 3 on first roll
        case 12: // lose with 12 on first roll
           gameStatus = LOST;
           break;
        default: // did not win or lose, so remember point
           gameStatus = CONTINUE; // game is not over
           myPoint = sumOfDice; // remember the point
           break;
     }

     // while game is not complete
     while ( CONTINUE == gameStatus ) // not WON or LOST
     {
       roleCounter++;
        sumOfDice = rollDice(); // roll dice again

        // determine game status
        if ( sumOfDice == myPoint ){ // win by making point
           gameStatus = WON;
  	  }

        else{
           if ( sumOfDice == 7 ){ // lose by rolling 7 before point
              gameStatus = LOST;
  		     }
  	  }
     }

     // if role counter is above limit, reduce to the ROLL_NUMBER + 1
     if(roleCounter > ROLL_NUMBER){
       roleCounter = ROLL_NUMBER + 1;
     }

     // add to according array
     if ( WON == gameStatus ){
        wins[roleCounter - 1] += 1;
     }
     else {
        losses[roleCounter - 1] += 1;
     }

     totalRoles += roleCounter;
   }

   printTotals(wins, losses, totalRoles);

   return 0;
}

// roll dice, calculate sum and display results
unsigned int rollDice()
{
   unsigned int die1 = 1 + rand() % 6;
   unsigned int die2 = 1 + rand() % 6;

   unsigned int sum = die1 + die2;

   return sum;
}

// prints out the statistics
void printTotals(const array<int, ROLL_NUMBER> & winTally, const array<int, ROLL_NUMBER> & lossTally, int totalRoles)
{
  int totalGamesWon = 0;

  for(int counter = 0; counter < ROLL_NUMBER; counter++){
    cout << setw(3) << winTally[counter] << " games won and ";
    cout << setw(3) << lossTally[counter] << " games lost on roll " << counter + 1 << endl;
    totalGamesWon += winTally[counter];
  }

  cout << "\nThe chances of winning are ";
  cout << totalGamesWon << " / " << NUMBER_OF_GAMES << " : ";
  cout << setprecision(2) << fixed;
  cout << totalGamesWon * 100 / (double)NUMBER_OF_GAMES << "%" << endl;

  cout << "The average game length is ";
  cout << totalRoles / double(NUMBER_OF_GAMES) << " rolls." << endl;
}
