#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector <int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.pop_back();
	v.resize(10,9);
	v.at(5)= 7;
	v[6]=12;
	cout<<v.empty()<<endl;
	
	for (unsigned int x=0; x<v.size();++x)
		cout<<v[x]<<" ";
	cout<<endl<<"the size of v: "<<v.size();
	
	return 0;
}
