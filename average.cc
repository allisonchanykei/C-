#include <iostream>
using namespace std; 

int main(){

	float x,y;
	int n;
	
	while (y!=0){
		cout<<"Enter a value (quit on 0): ";
		cin>>y;
		x=x+y;
		n=n+1;
	}
	
	cout<<"The average is "<<float(x/(n-1))<<endl;
	
		return 0;
}
