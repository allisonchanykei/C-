#include <iostream>
using namespace std;

long fac (int n){
	if (n==1)
		return n;
	return n*fac(n-1);
}

int main(){
	cout<<fac (4);
	return 0;
}
