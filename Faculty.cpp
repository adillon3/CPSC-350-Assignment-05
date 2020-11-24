/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

#include "Faculty.h"


Faculty :: Faculty(int newID, string newFirstName, string newLastName, string newFacultyLevel,
  string newDepartment, DoublyLinkedList<int> newAdviseesIDs) : Person(newID, newFirstName, newLastName)
{
  facultyLevel = newFacultyLevel;
  department = newDepartment;
  adviseesIDs = newAdviseesIDs;
}
Faculty :: ~Faculty()
{}
/*
//getters and setters
string Faculty :: GetFacultyLevel();
string Faculty :: GetDepartment();
DoublyLinkedList<int> Faculty :: GetAdviseesIDs();
void Faculty :: SetFacultyLevel();
void Faculty :: SetDepartment();
void Faculty :: AddAdvisee(int newAdvisee);
void Faculty :: RemoveAdvisee(int newAdvisee);
*/

//virtual methods
void Faculty :: PrintPerson(ostream& oFile)
{
  oFile << "YEET";
}
