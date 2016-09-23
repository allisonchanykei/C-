#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
void printvec(const vector <int> v){
	unsigned int x;
	for (x=0; x<v.size();++x)
		cout<<v.at(x)<<" ";
	cout<<endl;
}

void printvec11(const vector <int> v){
	for (auto i:v) //new c++11
		cout<<i<<" ";
	cout<<endl;
}

int main(){
	
	vector <int> v; //declare v but with no size
	//v.at(0)=9; //throws out of bounds error
	//v[0]=9; //throws seg fault
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
		
	vector <int> y(3); //create the vector y with a size of 3 (0,1,2) BUT no initialization
	cout<<y.at(0)<<endl; //this is not an error however pre exisiting data in memory may exist
	y.at(0)=0;
	y.at(1)=5;
	y[2] =10;
	
	vector <int> z(3,1); //create the vector z with a size of 3 (0,1,2) and initialize all to 1
	//therefore z[0] z[1] z[2] are all 1
	
	vector <int> w = {1,2,3};	//new in c++11
	
	printvec(v);
	printvec(y);
	printvec(z);
	printvec11(w);
	
	return 0;
}
