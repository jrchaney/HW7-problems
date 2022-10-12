#include <iostream>

using namespace std;

void time(int& seconds);

int main(){
  int seconds = 0;
  time(seconds);
    
}

void time(int& seconds){

  int hours;
  int mins;
  int secs;
  cout << "Enter the time in seconds :" << endl;
  
  cin >> seconds;
  
  if (seconds >= 3600)
    hours = seconds/3600;
  else
    hours = 0;

  if (seconds % 3600 == 0)
    mins = 0;
  else
    mins = (seconds % 3600) / 60;

  if ((seconds % 3600) % 60 == 0)
    secs = 0;
  else 
    secs = (seconds % 3600) % 60;

  cout << "The time is " << hours << " hour(s) " << endl;
  cout << mins << " minute(s) " << endl;
  cout << secs << " second(s) " << endl;  
  }
