#include <iostream>
using namespace std;

void getAb(string words[], int index);

int main(){

  int numWords;

  cin >> numWords;
  string words[numWords];

  for(int i = 0; i < numWords; i++){
    cin >> words[i];
  }

  for(int i = 0; i < numWords; i++){
    if(words[i].length() > 10){
      getAb(words, i);
    }
  }

  for(int i = 0; i < numWords; i++){
    cout << words[i] << endl;
  }

  return 0;
}

void getAb(string words[], int index){
  string newWord = "";
  newWord = newWord + words[index][0];
  int count = words[index].substr(0, words[index].length()-2).length();
  newWord = newWord + to_string(count) + words[index][words[index].length()-1];
  words[index] = newWord;
}
