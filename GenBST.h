/*******************************
 * Andrew Dillon
 * 2382400
 * CPSC 350
 * Assignment 05
 *******************************/
 #ifndef GENBST_H_
 #define GENBST_H_

 #include "TreeNode.h"

class BST
{
public:
  BST()
  {
    root = nullptr;
  }
  ~BST()
  {
    //iterate and delete each node
    //call delete and use traversal method
  }

  void InsertNode(int value)
  {
    TreeNode *node = new TreeNode(value);

    if(IsEmpty())
    {
      root = node;
    }
    else // not an empty tree, find insertion point
    {
      TreeNode *current = root;
      TreeNode *parent = nullptr;

      while(true)
      {
        //iterate to find insertion point
        parent = current;
        if(value < current -> key)
        {
          current = current -> left;

          if(current == nullptr)
          {
            //found location
            parent -> left = node;
            break;
          }
        }
        else
        {
          current = current -> right;

          if(current == nullptr)
          {
            parent -> right = node;
            break;
          }
        }
      }
    }
  }
  bool SearchNode(int value)
  {
    if(IsEmpty())
    {
      return false;
    }
    else
    {
      //tree is not empty, lets go looking for the node
      TreeNode *current = root;
      while(current -> key != value)
      {
        if(value < current -> key)
        {
          current = current -> left;
        }
        else
        {
          current = current -> right;
        }
        if(current == nullptr)
        {
          return false;
        }
      }
    }
    return true;
  }
  bool deleteNode(int value)
  {
    if(IsEmpty()) // root is null
    {
      return false;
    }
    //invoke search to determine if it exists in the tree or not

    TreeNode* parent  = nullptr;
    TreeNode* current = root;
    bool isLeftNode   = true;

    //finding node
    while(current -> key != value)
    {
      parent = current;

      if(value < current -> key)
      {
        isLeftNode = true;
        current = current -> left;
      }
      else
      {
        isLeftNode = false;
        current = current -> right;
      }

      if(current == nullptr)
      {
        return false;
      }
    } // END while(current -> key != value)

    //at this point, we jave found our key, now we need to delete out InOrder

    //case: node to be deleted does not have children aka a leafnode
    if(current -> left == nullptr && current -> right == nullptr)
    {
      if(current == root) //root is only node in tree
      {
        root = nullptr;
      }
      else if(isLeftNode) //left child
      {
        parent -> left = nullptr;
      }
      else //right child
      {
        parent -> right = nullptr;
      }
    }//END if(current -> left == nullptr && current -> right == nullptr)
    //case: node to be deleted has one child, determin of decendent is left or right
    else if(current -> right == nullptr)//does not have right child, must be left
    {
        if(current == root)//root
        {
          root = current -> left;
        }
        else if(isLeftNode)  //left child
        {
          parent -> left = current -> left;
        }
        else //right child
        {
          parent -> right = current -> left;
        }
    }// END else if(current -> right == nullptr)
    else if(current -> left == nullptr)//does not have left child, must be right
    {
        if(current == root)//root
        {
          root = current -> right;
        }
        else if(isLeftNode)  //left child
        {
          parent -> left = current -> right;
        }
        else //right child
        {
          parent -> right = current -> right;
        }
    }//END else if(current -> left == nullptr)
    //case: node has 2 children
    else
    {
      //find successor
      TreeNode* successor = GetSuccessor(current);//current is node to be deleteNode

      if(current == root)
      {
        root = successor;
      }
      else if(isLeftNode)
      {
        parent -> left = successor;
      }
      else
      {
        parent -> right = successor;
      }
      successor -> left = current -> left;

      return true;
    }

}

  TreeNode* GetSuccessor(TreeNode *d)//helper function for delete.  d is node to delete
  {
     TreeNode* sp = d;
     TreeNode* successor = d;
     TreeNode* current = d -> right;

     while(current != nullptr)
     {
       sp = successor;
       successor = current;
       current = current -> left;
     }

     if(successor != d -> right)
     {
       sp -> left = successor -> right;
       successor -> right = d -> right;
     }

     return successor;

  }

  bool IsEmpty()
  {
    if(root == nullptr)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  int  GetMax()
  {
    if(root = nullptr)
    {
      throw "Tree Empty: No Max Value";
    }

    TreeNode *temp = root;
    while(temp -> right != nullptr)
    {
      temp = temp -> right;
    }

    return temp -> key;
  }
  int  GetMin()
  {
    if(IsEmpty())
    {
      throw "Tree Empty: No Minimum Value";
    }

    TreeNode *temp = root;

    while(temp -> left != nullptr)
    {
      temp = temp -> left;
    }

    return temp -> key;
  }

  void RecPrint(TreeNode *node);
  void PrintTree();

  void InOrder()
  {
    InOrderHelper(root);
  }
  void PostOrder()
  {
    PostOrderHelper(root);
  }
  void PreOrder()
  {
    PreOrderHelper(root);
  }


private:
  //traversals
    void InOrderHelper(TreeNode* n)
    {
      if(n != nullptr)
      {
        InOrderHelper(n -> left);
        cout << n -> key << endl;
        InOrderHelper(n -> right);
      }
    }
    void PostOrderHelper(TreeNode* n)
    {
      if(n != nullptr)
      {
        PostOrderHelper(n -> left);
        PostOrderHelper(n -> right);
        cout << n -> key << endl;
      }
    }
    void PreOrderHelper(TreeNode* n)
    {
      if(n != nullptr)
      {
        cout << n -> key << endl;
        PreOrderHelper(n -> left);
        PreOrderHelper(n -> right);
      }
    }


  TreeNode *root;
};

 #endif // GENBST_H_
