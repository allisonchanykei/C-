#include <iostream> // for cout
using namespace std; // standard namespace

int main(){
	string name;
	cout<<"Enter your full name: ";
	getline(cin, name);
	int age;
	cout<<"Enter age: ";
	cin>>age;
	cout<<"Hello "<<name<<" you are "<<age<<endl;
	return 0;
}
