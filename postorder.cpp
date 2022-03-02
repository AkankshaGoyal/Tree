#include <bits/stdc++.h>
using namespace std;


struct  Node
{
	int data;
	struct Node *left,*right;
};


Node *newNode(int data)
{
   Node *temp = new Node();
   temp->data  = data;
   temp->left = temp->right = NULL;
   return temp;
}

void postorder(Node * root)
{
	  if (root == NULL)
        return;
 
    // first recur on left subtree
    postorder(root->left);
 
    // then recur on right subtree
    postorder(root->right);
 
    // now deal with the node
    cout << root->data << " ";
}


int main()
{
   struct Node * root = newNode(1);
   root->left = newNode(2);
   root->right = newNode(3);
   root->left->left = newNode(4);
   root->left->right = newNode(5);
   cout<<"printpostorder";
   postorder(root);
   return 0;
}