#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

int main()
{
  const unsigned int SENTENCE_LENGTH = 145; // the length of a tweet

  char sentence[SENTENCE_LENGTH];

  cout << "Enter a line of text:" << endl;

  cin.getline (sentence,SENTENCE_LENGTH);

  const char * delimiters = " ,.?!-\';:";

  char * token = strtok(sentence, delimiters);

  vector<string> reversedSentence;

  while (token != NULL)
  {
    reversedSentence.push_back(token);
    token = strtok(NULL, delimiters);
  }

  unsigned int counter = reversedSentence.size() - 1;

  do{
    cout << reversedSentence[counter] << " ";
    counter--;
  } while(counter > 0);

  cout << reversedSentence[0];

  cout << endl;

  return 0;
}
