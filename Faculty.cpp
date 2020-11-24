/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/

#include "Faculty.h"


Faculty :: Faculty(int newID, string newFirstName, string newLastName, string newFacultyLevel,
  string newDepartment, DoublyLinkedList<int> newAdviseesIDsList) : Person(newID, newFirstName, newLastName)
{
  facultyLevel = newFacultyLevel;
  department = newDepartment;
  adviseesIDsList = newAdviseesIDsList;
}
Faculty :: ~Faculty()
{}

//getters and setters
string Faculty :: GetFacultyLevel()
{
  return facultyLevel;
}
string Faculty :: GetDepartment()
{
  return department;
}
DoublyLinkedList<int> Faculty :: GetAdviseesIDs()
{
  return adviseesIDsList;
}
void Faculty :: SetFacultyLevel(string newFacultyLevel)
{
  facultyLevel = newFacultyLevel;
}
void Faculty :: SetDepartment(string newDepartment)
{
  department = newDepartment;
}
void Faculty :: AddAdvisee(int newAdvisee)
{
  adviseesIDsList.InsertBack(newAdvisee);
}
void Faculty :: RemoveAdvisee(int oldAdvisee)
{
  adviseesIDsList.Delete(oldAdvisee);
}


//virtual methods
void Faculty :: PrintPerson(ostream& oFile)
{
  oFile << "YEET";
}
