#include <vector>
#include <iostream>
using namespace std;

int main(){
	int c;
	vector <int> v;
	for (int y=0;y<10;y++){
		double ans=0;
		for (int x= 1;x<=10;x++){
			cin>>c;
			ans=ans+(c*x);
		}
		v.push_back(ans);
	}
	for (unsigned int x=0;x<v.size();x++){
		cout<<v[x]<<endl;
	}
	return 0;
}

