#include <iostream>
using namespace std;

void breakup (int, int &, int &, int &, int &, int &);
int main (){
	int num,tth,tho,hun,ten,one;
	cin>>num;
	breakup (num, tth,tho,hun,ten,one);
	cout<<tth<<endl<<tho<<endl<<hun<<endl<<ten<<endl<<one<<endl;
	return 0;
}
void breakup (int num, int &tth, int &tho, int &hun, int &ten, int &one){
	one = num % 10;
	ten = num % 100 - one;
	hun = num % 1000 - ten - one;
	tho = num % 10000 - hun - ten - one;
	tth = num % 100000 - tho - hun - ten - one;
}
