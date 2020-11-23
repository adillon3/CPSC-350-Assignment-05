/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #include "Assign5.h"

 int main()
 {

   cout << "Hello" << endl << endl;

   Student myStudent(12345, "Travis", "McElroy", "Junior", "Stage Craft", 2.5, 67890);

   myStudent.PrintPerson(cout);

   cout << "END\n\n";
   return 0;
 }
