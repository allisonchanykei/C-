#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
	srand(static_cast<unsigned>(time(0))); 
	vector <int> v;
	for (int x=0;x<50;x++){
		v.push_back(rand()%101);
	}
	//for (int x=0;x<50;x++){
		//if (v[x]%2==1){
			//v.erase(v.begin()+x);
			//x--;
		//}
	//}
	for (int x = v.size()-1;x>=0;x--){
		if (v[x]%2==1)
			v.erase(v.begin()+x);
		}
	sort(v.begin(),v.end());
	for (unsigned int x=0;x<v.size();x++){
		cout<<v[x]<<endl;
	}
	return 0;
}
