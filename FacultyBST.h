/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/
 #ifndef FACULTYBST_H_
 #define FACULTYBST_H_

 #include "GenBST.h"
 #include "Person.h"
 #include "Faculty.h"


class FacultyBST : public GenBST<Faculty>
{
public:
  void SerializeFacultyBST(ostream& oFile);
  void SerializeFacultyBSTHelper(ostream& oFile, TreeNode<Faculty>* parentNode);
};

 #endif // FACULTYBST_H_
