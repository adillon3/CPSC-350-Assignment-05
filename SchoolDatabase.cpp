/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

#include "SchoolDatabase.h"

void SchoolDatabase :: RunDatabase()
{
  //VARIABLES
  int menuChoice;

  cout << endl << endl;
  cout << "Hello and  welcome to school database." << endl << endl;

  do
  {
    menuChoice = GetMenuInput(MAIN_MENU, NUM_MAIN_MENU_OPTIONS);

    cout << "DATA ENTERED\n\n\n\n";
  } while(menuChoice != NUM_MAIN_MENU_OPTIONS);
}

int SchoolDatabase :: GetMenuInput(const string initialMessage, const int numMenuOptions)
{
  bool valid = false;
  int menuChoice = 0;

  do
  {
    cout << initialMessage;
    cin >> menuChoice;
    if(cin.fail())
    {
      cin.clear();
      cin.ignore(100000000, '\n');
      cout << "\nSorry, please enter numeric input.\n\n";

      valid = false;
    }
    else if(menuChoice > 0 && menuChoice <= numMenuOptions)
    {
      valid = true;
    }
    else
    {
      cout << "\nSorry, please enter a value between 1 and " << numMenuOptions << endl << endl;
    }

  } while(!valid);
}
