#include <iostream>

using namespace std;

int main(){

  int n;
  int junk[100000];
  int min = 1000000000;

  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> junk[i];
    }
  for (int i = 0; i < n; i++){

    if (min > junk[i])
      min = junk[i];
  }
  cout << min;
  
}