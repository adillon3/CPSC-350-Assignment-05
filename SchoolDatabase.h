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
   SchoolDatabase();
   ~SchoolDatabase();

   void RunDatabase();



   //Main methods for menu operations
   void PrintStudentDatabase();
   void PrintFacultyDatabase();
   void PrintStudent(); //Prompt for Student ID and call helper method
   void PrintFaculty(); //Prompt for Student ID and call helper method
   void PrintStudentAdvisor(); //Promprt for ID, calls helper to search and print
   void PrintFacultyAdvisees(); //Promprt for ID, calls helper to search and print
   void AddStudent();
   void DeleteStudent(); //Given ID
   void AddFaculty();
   void DeleteFaculty(); //Given ID
   void ChangeStudentAdvisor(); //Prompt for student id and the new faculty id
   void RemoveAdvisee(); //Prompt for facilty ID and student ID
   void Rollback(); //Remove last action from the stack and undo last method

 private:
   int GetMenuInput(const string initialMessage, const int numMenuOptions);
   bool GetYesOrNoInput(const string initialMessage);

   int GenerateStudentID();
   int GenerateFacultyID();

   Student* SearchTreeForStudentID(int ID);
   Faculty* SearchTreeForFacultyID();


   GenBST<Student> studentTree;
   GenBST<Faculty> facultyTree;



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
