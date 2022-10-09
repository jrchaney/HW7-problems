#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double sumArray (double list[]);
int main() {


  int resistance[5] = {16, 27, 39, 56, 81};

  double current[5] = {};

  double power[5] = {};
  for (int i = 0; i < 5; i++) {
    cin >> current[i];

    if (i == 0)
      power[0] = resistance[0] * pow(current[0], 2);
    else if (i == 1)
      power[1] = resistance[1] * pow(current[1], 2);
    else if (i == 2)
      power[2] = resistance[2] * pow(current[2], 2);
    else if (i == 3)
      power[3] = resistance[3] * pow(current[3], 2);
    else if (i == 4)
      power[4] = resistance[4] * pow(current[4], 2);
  }

  cout << setprecision(2) << fixed;
  cout << resistance[0] << setw(10) << current[0] << setw(11) << power[0]
       << endl;
  cout << resistance[1] << setw(10) << current[1] << setw(11) << power[1]
       << endl;
  cout << resistance[2] << setw(10) << current[2] << setw(11) << power[2]
       << endl;
  cout << resistance[3] << setw(10) << current[3] << setw(11) << power[3]
       << endl;
  cout << resistance[4] << setw(10) << current[4] << setw(11) << power[4]
       << endl;

  int index;
  int sum = 0;

  double sumCurrent = sumArray(current);
  double sumPower = sumArray(power);

  cout << "total:" << setw(6) << sumCurrent << setw(11) << sumPower << endl;


  
  }
double sumArray (double list[]){
  int index;
  int sum = 0;

  for (index = 0; index < 5; index++)
    sum = sum + list[index];

  return sum;
}