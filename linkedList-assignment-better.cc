#include <iostream>
#include <string>
using namespace std;

struct node{
	node(string s, node*);
	string st;
	node* next;
};

node::node(string s, node* np=0){
	st = s;
	next = np;
}

//alternate node ctor with initialization list
//node::node(string s, node* np=0): st(s), next(np) {}

void walk(node* nd){
	cout<< nd->st <<" ";
	if (nd->next  !=0 )
		walk(nd->next);
}

void length(node* nd, int& count){
	count = 0;
	++count;
	if (nd->next!=0)
		length (nd->next,count);
	//cout<<count<<" ";
}

int length(node* nd){
	if (nd==0) return 0;
	return (length(nd->next)+1);
}

/*
node* NewNode(string s){
	node* np = new node;
	np->st = s;
	np->next = 0;
	return np;
}
*/

//Must pass nd by ref or seg fault. We must change root node address in main.
void pushfront(node* &nd, string s){ 
	nd = new node(s, nd); //wow this does it all since the ctor sets the next pointer 
	//node* np = new node(s,nd);
	//nd = np;
}

void popfront(node* &nd){
	if(nd){
		node* temp = nd->next;
		delete nd;
		nd=temp;
	}
}

/*can't pushback on root=0 since no node exists yet. So must check for it.
copy ctor called for nd pointer so root in main not changed. This is 
okay if one node already exists since we just add to the end of it.
But if no node exists yet (root=0) then we must change root addr so we
have to pass by ref also.*/

void pushback(node* &nd, string s){ 
	if (nd == 0){ // or !nd
		nd = new node(s); //call new directly for defined struct ctor
		return;
	}
	pushback(nd->next, s);
}

void popback(node* &nd){
	if(nd->next == 0){
		delete nd;
		nd = 0;
		return;
	}
	popback(nd->next);
}

/* must pass nd by ref since we may need to insert at the
root node and hence change the root addr */
void insert(node* &nd, string s){
	if (nd==0)
		nd = new node (s,nd);
	else if (nd->st.compare(s)>0){
		pushfront(nd,s);
		//return;
	}
	else insert (nd->next,s);
}
	
void lfree(node* nd){
 if (nd == 0) return; //don't crash if nothing in linked list
     if (nd->next != 0)
        lfree(nd->next);
     delete nd;
     nd = 0; //sets all linked list pointers to zero (including the first one, root=0)   
	/*
	//alternate solution by Nick Hu
	if (nd){    // same as if nd != 0
		lfree(nd->next);
		delete nd;
		nd = 0;
	}
	*/
     /*
    //alternate not better solution:
    if (nd == 0) return;
    lfree(nd->next);
    delete nd;
    nd = 0;
    */     


}

int main(){
	
	const char* sarray[6] = {"b","d","a","e","f","c"};
	node* root=0;
	
	int x;
	for (x=0; x<6 ; x++)
	{
		//pushback(root, sarray[x]);
		//pushfront(root, sarray[x]);
		insert(root, sarray[x]);
		walk(root);
		cout<<endl;
	}
	for (x=0; x<3 ; x++)
	{
		cout<<"popfront"<<endl;
		popfront(root);
		walk(root);
		cout<<endl;
	}
	insert(root, "zoo");
	walk(root);
	cout<<endl;	
	for (x=0; x<3 ; x++)
	{
		cout<<"popback"<<endl;
		popback(root);
		walk(root);
		cout<<endl;
	}
	pushback(root, "zzz");
	walk(root);
	cout<<endl;
	
	lfree(root);
	return 0;
}
