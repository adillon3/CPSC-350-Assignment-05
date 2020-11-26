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

   Student* SearchTreeForStudentID(int searchID);
   Faculty* SearchTreeForFacultyID(int searchID);

   void SerializeStudents();
   void SerializeFaculty();

   void DeserializeStudents();
   void DeserializeFaculty();


   GenBST<Student> studentTree;
   GenBST<Faculty> facultyTree;

   const string MAIN_MENU = "1.  Print all students and their information\n"
                            "2.  Print all faculty and their information\n"
                            "3.  Find student from ID\n"
                            "4.  Find faculty from ID\n"
                            "5.  Find student from ID and their advisor\n"
                            "6.  Find faculty from ID and their advisees\n"
                            "7.  Add a new student\n"
                            "8.  Delete a student from their ID\n"
                            "9.  Add a new faculty member\n"
                            "10. Delete a faculty from their ID\n"
                            "11. Change a student’s advisor from their IDs\n"
                            "12. Remove an advisee from a faculty member from their IDs\n"
                            "13. Rollback\n"
                            "14. Exit\n"
                            "Choice: ";
   const int NUM_MAIN_MENU_OPTIONS = 14;
 };

 #endif // SCHOOLDATABASE_H_
