#include <iostream>
#include <cmath>
using namespace std;

long fib(int, int &);
int main(){
	int x, s=0, ans;
	cout<<"Enter the number of fibonacci: ";
	cin>>x;
	ans = fib((x-1),s);
	cout<<ans<<' '<<s<<endl;
	return 0;
}
long fib(int n, int &sum){
	if (n==0 or n==1)
		return n;
	int f = fib(n-1,sum)+fib(n-2,sum);
	sum = sum + f;
	cout<<sum<<endl;
	return f;
}
