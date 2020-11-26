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
void Faculty :: PrintPerson(ostream& oFile) const
{
  oFile << "------------------------------------\n";
  oFile << "* Faculty *\n";
  PrintPersonAttributes(oFile);
  oFile << "------------------------------------\n";
  oFile << "Level:   " << facultyLevel << endl;
  oFile << "Dept:    " << department << endl;

  oFile << "Advisees' IDs:\n";

  for(int i = 0; i < adviseesIDsList.GetSize(); ++i)
  {
    cout << " - " << adviseesIDsList.GetValueAtIndex(i) << endl;
  }

  //PrintAdvisees(oFile);

  oFile << "------------------------------------\n\n";
}
/*
void Faculty :: PrintAdvisees(ostream& oFile) const
{
  for(int i = 0; i < adviseesIDsList.GetSize(); ++i)
  {
    oFile << " - " << adviseesIDsList.GetValueAtIndex(i) << endl;
  }
}*/
