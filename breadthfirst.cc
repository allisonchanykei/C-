#include <iostream>
#include <queue>
using namespace std;

struct node{
	int c;
	node* left;
	node* right;
	
	//bool operator<(conc node &rhs) conc{
	//	return ( c < rhs.c );
	//}
};

void breadth(node* nd, int x){
	if (nd == 0) return;
	if (x==0)
		cout<<nd->c<<" ";
	if (nd->left)
		cout<<nd->left->c<<" ";
	if (nd->right)
		cout<<nd->right->c<<" ";
	x=1;
	breadth (nd->left,x);
	breadth (nd->right,x);
}

node* NewNode(int c){
	node* np = new node;
	np->c = c;
	np->left = 0;
	np->right = 0;
	return np;
}

/* must pass nd by ref since we may need to insert at the
root node and hence change the root addr */
void insert(node* &nd, int c){  // inserts with order
	if (nd==0)
		nd = NewNode(c);
	else if (c < nd->c)
		insert(nd->left,c);
	else
		insert(nd->right,c);
}

	
void lfree(node* root){ //which order should deleting be: (pre, in, post ) only one of them will work
	if (root == 0) return;
	if (root->left)
		lfree(root->left);
	if (root->right)
		lfree(root->right);
	delete root;
	root = 0;
}

int main(){
	
	const int iarray[8] = {4,2,6,1,3,5,7,8};
	node* root=0;
	
	int x;
	for (x=0; x < 8 ; x++)
	{
		insert(root, iarray[x]);
		//walk(root);
		//cout<<endl;
	}
	
	x=0;
	breadth(root,x);
	cout<<endl;

	lfree(root);
	return (0);
}

