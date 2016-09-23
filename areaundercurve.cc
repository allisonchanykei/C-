#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double area=0;
	double w = 10/1e4;
	double h, p = w/2;
	for (int x=0;x<1e4;x++){
		h = (2*p*p*p)/3;
		p=p+w;
		area=area+h*w;
    }
    cout<<setprecision(9)<<"The area is "<<area;    
    return 0;
}
