#include <iostream>
#include <cmath>
using namespace std;

void quad (double,double,double,double &, double &);
int main(){
	double a,b,c,x1,x2;
	cin>>a>>b>>c;
	quad(a,b,c,x1,x2);
	cout << "The roots of ("<<a<<")x^2+("<<b<<")x+("<<c<<") are "<<x1<<" and "<<x2;
	
	return 0;
}
void quad (const double a, const double b, const double c, double &x1, double &x2){
	double x = pow(b, 2);
	x1 = (-b + sqrt(x-4*a*c))/(2*a);
	x2 = (-b - sqrt(x-4*a*c))/(2*a);
}
