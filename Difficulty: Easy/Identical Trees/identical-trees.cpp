/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2) {
        // Your Code here
         if(r1==NULL && r2==NULL)
         return true;
         if(r1==NULL && r2!=NULL)
         return false;
         if(r2==NULL && r1!=NULL)
         return false;
         
         bool Left=isIdentical(r1->left,r2->left);
         bool Right=isIdentical(r1->right,r2->right);
         bool value=r1->data==r2->data;
       
    return (Left && Right && value);
         }
    
};