/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/
 #include "FacultyBST.h"

 void FacultyBST :: SerializeFacultyBST(ostream& oFile)
 {
   SerializeFacultyBSTHelper(oFile, root);
 }
 void FacultyBST :: SerializeFacultyBSTHelper(ostream& oFile, TreeNode<Faculty>* parentNode)
 {
   if(parentNode == nullptr)
   {
     return;
   }

   parentNode -> key.SerializeFaculty(oFile);
   SerializeFacultyBSTHelper(oFile, parentNode -> left);
   SerializeFacultyBSTHelper(oFile, parentNode -> right);
 }
