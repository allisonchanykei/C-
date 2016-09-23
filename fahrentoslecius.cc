#include <iostream> // for cout
using namespace std; // standard namespace

int main(){
	double tempf;
	cout<<"Enter temperature in Fahrenheit: ";
	cin>>tempf;
	float tempc((tempf-32)/1.8);
	cout<<"The temperature in celcius is "<<tempc<<endl;
	return 0;
}
