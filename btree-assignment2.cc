#include <iostream>
using namespace std;

struct node{
	int c;
	node* left;
	node* right;
	
	//bool operator<(conc node &rhs) conc{
	//	return ( c < rhs.c );
	//}
};

void prewalk(node* nd){
	if (nd == 0) return;
	cout<<nd->c<<" ";
	if (nd->left)
		prewalk(nd->left);
	if (nd->right)
		prewalk(nd->right);

}
void postwalk(node* nd){
	if (nd == 0) return;
	if (nd->left)
		postwalk(nd->left);
	if (nd->right)
		postwalk(nd->right);
	cout<<nd->c<<" ";

}
void inwalk(node* nd){
	if (nd == 0) return;
	if (nd->left)
		inwalk(nd->left);
	cout<<nd->c<<" ";
	if (nd->right)
		inwalk(nd->right);
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
	
	const int iarray[7] = {4,2,6,1,3,5,7};
	node* root=0;
	
	int x;
	for (x=0; x < 7 ; x++)
	{
		insert(root, iarray[x]);
		//walk(root);
		//cout<<endl;
	}
	
	prewalk(root);
	cout<<endl;
	
	postwalk(root);
	cout<<endl;
	
	inwalk(root);
	cout<<endl;
	
	lfree(root);
	return (0);
}

