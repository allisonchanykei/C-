#include <iostream>
using namespace std;

struct node{
	string st;
	node* next;
};

//constructor(ctor) for node - function that gets called when you create the data type
//node::node(string s, node *np=0){	//function name is node which creates a node
	//st = s;
	//next = np;
//}

//void walk(node* np){
	//cout<<np->st<<" ";
	//if (np->next!=0){
		//walk(np->next);
	//}
//}	//hi bye end

void walk(node* np){
	if (np->next!=0){
		walk(np->next);
	}
	cout<<np->st<<" ";
}	//end bye hi

void lfree(node* np){
	if (np->next!=0){
		lfree (np->next);
	}
	delete np;
}
int main(){
	//node a;
	//a.st = "hi";
	node* root;
	root = new node;
	root->st = "hi";	//(*root).st="hi";
	root->next = new node;
	root->next->st="bye";
	root->next->next = new node;
	root->next->next->st = "end";
	root->next->next->next = 0;
//	cout<<root->st<<" ";	//hi
//	cout<<root->next->st<<" ";	//bye
//	cout<<root->next->next->st<<endl;	//end
	walk(root);
	//delete root->next->next;	//must delete in this order or else you wont be able to delete the others
	//delete root->next;
	//delete root;
	lfree(root);
	return 0;
}
