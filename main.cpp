/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

#include "Person.h"

 int main()
 {
   Person myGuy(12345, "Griffin", "McElroy");

   cout << myGuy.GetFirstName() << " ";
   cout << myGuy.GetLastName()  << " : ";
   cout << myGuy.GetID() << endl << endl;




   return 0;
 }
