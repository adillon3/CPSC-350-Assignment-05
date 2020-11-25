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
 string Student :: GetStudentLevel()
 {
   return studentLevel;
 }
 string Student :: GetMajor()
 {
   return major;
 }
 double Student :: GetGPA()
 {
   return gpa;
 }
 int Student :: GetAdvisorID()
 {
   return advisorID;
 }
 void Student :: SetStudentLevel(string newStudentLevel)
 {
   studentLevel = newStudentLevel;
 }
 void Student :: SetMajor(string newMajor)
 {
   major = newMajor;
 }
 void Student :: SetGPA(double newGPA)
 {
   gpa = newGPA;
 }
 void Student :: SetAdvisorID(int newAdvisorID)
 {
    advisorID = newAdvisorID;
 }

 //virtual methods
 void Student :: PrintPerson(ostream& oFile) const
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
 /*
 ostream& operator<<(ostream& oFile, const & object persons)
 {
   PrintPerson(oFile);
 }*/
