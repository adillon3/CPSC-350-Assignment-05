/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #include "Assign5.h"

 int main()
 {
   const string MAIN_MENU = "1.  Print all students and their information (sorted by ascending id #)\n"
                            "2.  Print all faculty and their information (sorted by ascending id #)\n"
                            "3.  Find and display student information given the students id\n"
                            "4.  Find and display faculty information given the faculty id\n"
                            "5.  Given a student’s id, print the name and info of their faculty advisor\n"
                            "6.  Given a faculty id, print ALL the names and info of his/her advisees\n"
                            "7.  Add a new student\n"
                            "8.  Delete a student given the id\n"
                            "9.  Add a new faculty member\n"
                            "10. Delete a faculty member given the id\n"
                            "11. Change a student’s advisor given the student id and the new faculty id\n"
                            "12. Remove an advisee from a faculty member given the id\n"
                            "13. Rollback\n"
                            "14. Exit\n"
                            "Choice: ";
   const int NUM_MAIN_MENU_OPTIONS = 14;

   //VARIABLES
   int menuChoice;



   cout << endl << endl;
   cout << "Hello and  welcome to school database." << endl << endl;






   do
   {
     menuChoice = GetMenuInput(MAIN_MENU, NUM_MAIN_MENU_OPTIONS);

     cout << "DATA ENTERED\n\n\n\n";
   } while(menuChoice != NUM_MAIN_MENU_OPTIONS);

//TEST DATA
/*
   Student stu1(12345, "Justin", "McElroy", "Senior", "Videogame Testing", 2.0, 67890);
   Student stu2(12345, "Travis", "McElroy", "Junior", "Stagecraft", 4.3, 67890);
   Student stu3(54321, "Griffin", "McElroy", "Freshmen", "Podcasting", 5.222, 67890);


   stu1.PrintPerson(cout);*/

   cout << "END\n\n";
   return 0;
 }
