#include <iostream>
using namespace std;

void swapxy (int &x, int &y){
	int z = y;
	y=x;
	x=z;
}
int main(){
	int x(8),y(10);
	cout<<"x is "<<x<<", y is "<<y<<endl;
//	int x = 8;
//	int y = 10;
	swapxy(x,y);
	cout<<"x is now "<<x<<", y is now "<<y<<endl;
	return 0;
}
