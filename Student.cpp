/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

 #include "Student.h"

Student :: Student(int newID, string newFirstName, string newLastName, string newStudentLevel,
   string newMajor, double newGPA, int newAdvisorID) : Person(newID, newFirstName, newLastName)
 {
   studentLevel = newStudentLevel;
   major = newMajor;
   gpa = newGPA;
   advisorID = newAdvisorID;
 }
Student :: ~Student()
 {

 }

 //getters and setters


 //virtual methods
 void Student :: printPerson()
 {
   cout << "YOYOYOYOYO\n";
 }
