#include <iostream>
using namespace std;

int main(){
  int num_participants;
  int position_k;
  int value_position_k;
  int total = 0;
  int args[2];

  for(int i = 0; i < 2; i++){
    cin >> args[i];
  }

  num_participants = args[0];
  position_k = args[1]-1;

  int arr[num_participants];

  for(int i =0; i < num_participants; i++){
    cin >> arr[i];
  }

  value_position_k = arr[position_k];

  for(int i = 0; i < num_participants; i++){
    if(arr[i] > 0 && arr[i] >= value_position_k){
      total++;
    }
  }

  cout << total << endl;

  return 0;
}
