#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left,*right;
};


Node* newNode(int data)
{
	Node *temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void printpreorder(Node *root)
{
	if(root == NULL)
		return;
   	  cout<<root->data;
   	printpreorder(root->left);
   	printpreorder(root->right);
}


int main()
{
	struct Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printpreorder(root);
    return 0;
}
