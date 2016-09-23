#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int n = 4;
	long a =0,b=1,c;
	for (int x=0;x<n;x++){
		if (x==0)
			cout<<a<<endl;
		else if(x==1)
			cout<<b<<endl;
		else{
			c = a + b;
			a = b;
			b = c;
			cout<<c<<endl;
		}
	}
	return 0;
}
