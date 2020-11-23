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
 string GetStudentLevel()
 {
   return studentLevel;
 }
 string GetMajor()
 {
   return major;
 }
 double GetGPA()
 {
   return gpa;
 }
 int GetAdvisorID()
 {
   return advisorID;
 }
 void SetStudentLevel(string newStudentLevel)
 {
   studentLevel = newStudentLevel;
 }
 void SetMajor(string newMajor)
 {
   major = newMajor;
 }
 void SetGPA(double newGPA)
 {
   gpa = newGPA;
 }
 void SetAdvisorID(int newAdvisorID)
 {
    advisorID = newAdvisorID;
 }

 //virtual methods
 void Student :: PrintPerson(ostream& oFile)
 {
   oFile << "------------------------------------\n";
   PrintPersonAttributes(oFile);
   oFile << "------------------------------------\n";
   oFile << "Level:   " << studentLevel << endl;
   oFile << "Majpr:   " << major << endl;
   oFile << "GPA:     " << gpa << endl;
   oFile << "Advisor: " << advisorID << endl;
   oFile << "------------------------------------\n\n";
 }
