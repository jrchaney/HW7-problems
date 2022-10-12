#include <iostream>

using namespace std;

int main() {

  int n;
  int junk[100001];
  int minIndex = 0;
  int day = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> junk[i];
  }
  for (int i = 0; i < n; i++) {

    for (int index = 1; index < n; index++){
    if (junk[minIndex] > junk[index])
      minIndex = index;
    }
  }
  cout << minIndex;
}