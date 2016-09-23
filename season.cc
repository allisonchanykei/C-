#include <iostream>
using namespace std;

enum month{January, Feburary, March, April, May, June, July, August, September, October, November, December};

int main(){
	int m;
	cout<<"Enter a number form 0 to 11: ";
	cin>>m;
	switch(m){
		case December: cout<< "December ";break;
		case January: cout<< "January ";break;
		case Feburary: cout<< "Feburary ";break;
		case March: cout<< "March ";break;
		case April: cout<< "April ";break;
		case May: cout<< "May ";break;
		case June: cout<< "June ";break;
		case July: cout<< "July ";break;
		case August: cout<<"August ";break;
		case September: cout<< "September ";break;
		case October: cout<< "October ";break;
		case November: cout<<"November ";break;
	}
	switch(m){
		case December:
		case January:
		case Feburary: cout<<"Winter";break;
		case March:
		case April:
		case May: cout<<"Spring";break;
		case June:
		case July:
		case August: cout<<"Summer";break;
		case September:
		case October:
		case November: cout<<"Autumn";break;
		default: cout<<"Invalid Input";break;
	}
	return 0;
}
