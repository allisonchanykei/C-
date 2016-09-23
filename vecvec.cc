#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void printvec(vector <vector<int> > v){
	for (unsigned int x=0;x<v.size();x++){
		for (unsigned int y=0;y<v[x].size();y++)
			cout<<v[x][y]<<" ";
		cout<<endl;
	}
}
void expand(vector <vector<int> > &v){
	for (int x=0;x<4;x++){
		vector <int> temp;
		for (int y=0;y<5;y++){
			int i=rand()%11;
			temp.push_back(i);
		}
		v.push_back(temp);
	}
}

int sumvec(vector<int> v){
	int s=0;
	for (unsigned int x=0;x<v.size();x++){
			s=s+v[x];
	}
	return s;
}

vector < vector <int> > sortsum (vector <vector<int> > v){
	vector <vector<int> > nv;
	vector<int> t;
	
	while (v.size()>0){
		int n=0;
		int min = sumvec(v[0]);
		t=v[0];
		for (unsigned int x=1;x<v.size();x++){
			if (sumvec(v[x]) <= min){
				min = sumvec(v[x]);
				t = v[x];
				n=x;
			}
		}
		nv.push_back(t);
		v.erase(v.begin()+n);
	}
	return nv;
}

int main(){
	srand(static_cast<unsigned>(time(0))); 
	vector <vector<int> > v;
	expand (v);
	printvec (v);
	cout<<endl;
	printvec(sortsum(v));
	return 0;
}
