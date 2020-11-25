/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #ifndef SCHOOLDATABASE_H_
 #define SCHOOLDATABASE_H_

 #include "Student.h"
 #include "Faculty.h"
 #include "GenBST.h"

 class SchoolDatabase
 {
 public:
   void RunDatabase();

   int GetMenuInput(const string initialMessage, const int numMenuOptions);



 private:
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
 };








 #endif // SCHOOLDATABASE_H_
