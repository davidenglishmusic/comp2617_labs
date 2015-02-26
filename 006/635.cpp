#include <iostream>
#include <random>
#include <string>
#include <ctime>
using namespace std;

void play(bool &, int);

int main()
{
  const int LOWER_LIMIT = 1;
  const int UPPER_LIMIT = 1000;

  default_random_engine engine(static_cast<unsigned int>(time(0)));
  uniform_int_distribution<unsigned int> randomInt(LOWER_LIMIT, UPPER_LIMIT);

  bool wantToPlay = true;

  do{
    int answer = randomInt(engine);
    play(wantToPlay, answer);
  }while(wantToPlay == true);

  return 0;
}

void play(bool &wantToPlay, int answer)
{
  cout << "I have a number between 1 and 1000." << endl;
  cout << "Can you guess my number?" << endl;
  cout << "Please type your first guess." << endl;

  int guess = 0;
  int numberOfGuesses = 0;

  bool gotRightAnswer = false;
  do{
    cin >> guess;
    if(guess > answer){
      cout << "Too high. Try again." << endl;
      numberOfGuesses++;
    }

    else if(guess < answer){
      cout << "Too low. Try again." << endl;
      numberOfGuesses++;
    }
    else{
      gotRightAnswer = true;
    }
  }while(gotRightAnswer == false);

  if(numberOfGuesses < 10){
    cout << "Either you know the secret or you got lucky!" << endl;
  }
  else if(numberOfGuesses == 10){
    cout << "Ahah! You know the secret!" << endl;
  }
  else{
    cout << "You should be able to do better!" << endl;
  }

  cout << "Would you like to play again ( y or n )?" << endl;

  string wantToPlayAgain;
  cin >> wantToPlayAgain;

  if(wantToPlayAgain == "n"){
    wantToPlay = false;
  }
}
