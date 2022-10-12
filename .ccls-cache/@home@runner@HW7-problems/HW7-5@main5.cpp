#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//////////////////// Prototype Functions /////////////////////////////////////
void TranslatePick(int flag_who, char selection);
char ComputerSelectRPSLK();
void DetermineWinner (char userPick, char computerPick);
string Wrand ();
int main() {

  
// declare vars
char userPick; // user's selection for game
bool valid_pick = false; // flag controlled while loop for obtaining
// user input
char computerPick; // randomly selected computer selection for
// game
// Display rules of the game.
cout << "It's time to play Rock, Paper, Scissors, Lizard, Spock!" << endl;
cout << "Use R (for Rock), P (for Paper), S (for Scissors), ";
cout << "L (for Lizard), and K (for Spock)." << endl;
// Obtain userPick. Prompt until a valid selection is made.
while (valid_pick == false)
{
cout << "You pick: ";
cin >> userPick;
if ( (userPick == 'R') || (userPick == 'P') || (userPick == 'S' ) ||
(userPick == 'L') || (userPick == 'K') )
{
valid_pick = true;
}
else
cout << "Invalid Selection. Try again. " << endl;
}
// Repeat selection back to user.
TranslatePick(0, userPick);
  // Obtain computer selection.
computerPick = ComputerSelectRPSLK();
TranslatePick(1, computerPick); // Inform user of computer selection
// HANDOUT (PART A): Determine the winner of the game.
// HANDOUT (PART B): Inform the user who won.
// HANDOUT (PART C): Randomly display celebratory messages if user won.

  DetermineWinner(userPick,computerPick);

  
  
  
  return 0;
  } 

/////////////// User-Created Functions ////////////////////////////////////////
/* Descprition: This function is used to translate the character selection to a
statement which is displayed to the user.
Parameters: flag_who is an integer which is used to indicate if the computer
or the user made the choice.
selection is one of the 5 valid character selections */

void TranslatePick(int flag_who, char selection)
{
  
// declare local function variables
string who_text;
  
// identify which statements to insert into the output below
if (flag_who == 0)
who_text = "You";
else
who_text = "The Computer";
  
// display output where the char selection is translated into words
if (selection == 'R')
cout << who_text <<" selected Rock." << endl;
else if (selection == 'P')
cout << who_text <<" selected Paper." << endl;
else if (selection == 'S')
cout << who_text <<" selected Scissors." << endl;
else if (selection == 'L')
cout << who_text <<" selected Lizard." << endl;
else if (selection == 'S')
cout << who_text <<" selected Spock." << endl;
else // something is wrong
cout << "Check code for errors. Message from TranslatePick fcn." << endl;
return;
}

string Wrand()
{

  string winner;
  int WrandPick;

  srand (time(NULL));
  WrandPick = rand() % 3;

  switch (WrandPick){
    case 0: 
    winner = "You won!";
    break;
    case 1:
    winner = "Congratulations you win!";
    break;
    case 2:
    winner = "You beat the computer!";
    break;
    default:
     cout << "Error";
  }

  return winner;
}



// function to determine winner 
void DetermineWinner (char userPick, char computerPick)
{
  if (userPick == 'R'){
    if (computerPick == 'R'){
      cout << "It's a tie!" << endl;
    }
    if (computerPick == 'P'){
      cout << "You lose" << endl;
    }
    if (computerPick == 'S'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'L'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'K'){
      cout << "You lose" << endl;
    }
  }
  if (userPick == 'P'){
    if (computerPick == 'P'){
      cout << "It's a tie!" << endl;
    }
    if (computerPick == 'L'){
      cout << "You lose" << endl;
    }
    if (computerPick == 'R'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'K'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'S'){
      cout << "You lose" << endl;
    }
  }
  if (userPick == 'S'){
    if (computerPick == 'S'){
      cout << "It's a tie!" << endl;
    }
    if (computerPick == 'K'){
      cout << "You lose" << endl;
    }
    if (computerPick == 'L'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'P'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'R'){
      cout << "You lose" << endl;
    }
  }
  if (userPick == 'L'){
    if (computerPick == 'L'){
      cout << "It's a tie!" << endl;
    }
    if (computerPick == 'S'){
      cout << "You lose" << endl;
    }
    if (computerPick == 'P'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'K'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'R'){
      cout << "You lose" << endl;
    }
  }
  if (userPick == 'K'){
    if (computerPick == 'K'){
      cout << "It's a tie!" << endl;
    }
    if (computerPick == 'L'){
      cout << "You lose" << endl;
    }
    if (computerPick == 'S'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'R'){
      cout << Wrand () << endl;
    }
    if (computerPick == 'P'){
      cout << "You lose" << endl;
    }
  }
  }



/* Descprition: This function is used to make a random character selection in the
game Rock, Paper, Scissors, Lizard, Spock
Parameters: there are no inputs */

char ComputerSelectRPSLK()
{
// declare local function variables
char randPickChar;
int randPick;
  
// pick a random number from 0 to 4
srand (time(NULL)); // initialize random seed.
randPick = rand() % 5; // gives us 0 to 4
//cout << randPick; // uncomment to debug
// assign random number to letter
switch (randPick)
{
case 0:
randPickChar = 'R';
break;
case 1:
randPickChar = 'P';
break;
case 2:
randPickChar = 'S';
break;
case 3:
randPickChar = 'L';
break;
case 4:
randPickChar = 'K';
break;
default:
cout << "Error in the function ComputerSelectRPSLK. " << endl;
}
return randPickChar;
}
