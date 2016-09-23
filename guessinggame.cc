#include <iostream>
using namespace std; // standard namespace

int main(){
	int val;
	cout<<"Enter a value from 1 to 100: ";
	cin>>val;
	int comp = 50;
	float d = 50;
	int guess = 0;
	int x;
	char ans;
	
	while (x!=0){
		guess = guess+1;
		if (d>2)
			d= d/2;
		else d=1;
		
		cout << "Is the number "<<comp<<" (h)igher, (l)ower or (c)orrect? ";
		cin>>ans;
		if (ans == 'l'){
			comp=comp-d;
		}
		if (ans == 'h'){
			comp=comp+d;
		}

		if (ans == 'c'){
			x=0;
		}
		
	}
	cout<<"The computer guessed "<<guess<<" times."<<endl;
	return 0;
}
