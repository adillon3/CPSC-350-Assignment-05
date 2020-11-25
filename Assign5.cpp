/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #include "Assign5.h"

 int GetMenuInput(const string initialMessage, const int numMenuOptions)
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
