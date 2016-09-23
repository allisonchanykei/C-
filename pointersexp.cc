#include <iostream>
using namespace std;

int main(){
	int* const xp;
	int y=4;
	int x=5;
	xp=&x;
	xp=&y;
//	*xp=6;
	cout<<*xp<<endl;
	return 0;
}
