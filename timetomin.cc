#include <iostream>
using namespace std;

short minfrommid (char, char);

int main(){
	short h,m;
	cin>>h>>m;
	cout<<minfrommid (h,m)<<endl;
	return 0;
}

short minfrommid (const char h, const char m){
	return h*60+m;
}
