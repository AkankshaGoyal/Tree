#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};


Node * newNode(int data)
{
	Node * temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}


int printheight(Node*root)
{
	if(root==NULL)
		return -1;
	int lheight = printheight(root->left);
	int rheight = printheight(root->right);
	if(lheight > rheight)
		return (lheight+1);
	else
		return (rheight+1);


}


int main()
{
    struct Node * root = newNode(1);
    root->left= newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right = newNode(3);
    root->right->right = newNode(4);
    root->right->right->right = newNode(5);
    root->right->right->right->right = newNode(6);
    int h = printheight(root);
    cout<<h;
    return 0;
}