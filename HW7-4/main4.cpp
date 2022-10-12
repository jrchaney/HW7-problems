#include <iostream>

using namespace std;
int smallestE(int n, int junk[]);

int main() {

  int n;    // days
  int junk[100001];
  int launch = 0;
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> junk[i];
  }

  
  launch = smallestE(n, junk);
  cout << launch;
  }

int smallestE(int n, int junk[]){

  int minIndex; 


    for (int index = 1; index < n; index++){
    if (junk[minIndex] > junk[index])
      minIndex = index;
    }

  return minIndex;
  }