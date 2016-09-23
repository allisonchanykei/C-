//#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

short dice (short &a, short &b, short &c){
	a = rand()%6+1;
	b = rand()%6+1;
    c =a+b;
	return c;
}
int main() {
	 srand(time(0));
//	 int *p=0;		//segfault
//	 cout<<*p;
//	 cout <<  rand() % 10 + 1 << endl;  //number between 1 and 10
	for (int x=0;x<10;x++){
	short a,b,c;
	dice (a,b,c);
	cout<<c<<endl;
}
	 return 0;
}
