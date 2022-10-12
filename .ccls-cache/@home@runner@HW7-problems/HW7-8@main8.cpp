#include <iostream>

using namespace std;

int sortbyFreq(int list[], int listSize) {

  int maxE = 9;
  // cin >> maxE;  max element in array

  int freq[9 + 1] = {0}; // frequency array

  for (int i = 0; i < listSize; i++) { // update the frequency array as elements
                                       // occur in the list[] array

    freq[list[i]]++;
  }

  int count = 0;

  for (int i = 0; i <= maxE; i++) {

    if (freq[i] > 0) {

      int value = 100000 - i;
      list[count] = 100000 * freq[i] + value;
      count++;
    }
  }
  return count;
}
void printArray(const int list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";

  cout << endl;
  return;
}
int main() {

  int listSize = 0; // size of array
  cin >> listSize;
  int list[listSize];

  int maxE = 0; // max element
  cin >> maxE;

  for (int i = 0; i < listSize; i++) {
    cin >> list[i]; // input array
  }

  int count = sortbyFreq(list, listSize);

  for (int i = 0; i < count; i++) {

    // Find frequency of elements
    int frequency = list[i] / 100000;

    // cout << " frequency when i = " << i << " is : "<< frequency << endl;

    // Find value at index i
    int value = 100000 - (list[i] % 100000);

    // Traversing till frequency
    // to print value at index i
    for (int j = 0; j < frequency; j++) {
      // cout << value << ' ';

      cout << " frequency when value is " << value << ": " << frequency << endl;
    }
  }

  return 0;
}