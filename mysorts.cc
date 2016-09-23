#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

vector <int> selectsort(vector <int> &);
vector <int> bubblesort(vector <int> &);
vector <int> insertsort(vector <int> &);

int main(int argc, char* argv[]){
	srand(static_cast<unsigned>(time(0))); 
	vector <int> v;
	for (int x=0;x<10;x++){
		v.push_back(rand()%21);
	}
	for (unsigned int x=0;x<v.size();x++){
		cout<<v[x]<<endl;
	}
	cout<<endl;
	
	vector <int> newv;
//	newv = selectsort (v);
//	newv = bubblesort (v);
	newv = insertsort (v);
	
	for (unsigned int x=0;x<newv.size();x++){
		cout<<newv[x]<<endl;
	}
	return 0;
}

vector <int> selectsort(vector <int> &v){
	vector <int> sorted;
	while (v.size()>0){
		int pos=0;
		int min = v[0];
		for (unsigned int x=1;x<v.size();x++){
			if (v[x]<min){
				min = v[x];
				pos = x;
			}
		}
		sorted.push_back(min);
		v.erase(v.begin()+pos);
	}
	return sorted;
}

vector <int> bubblesort(vector <int> &v){
	bool n = true;
	while (n){
		n=false;
		int max = 1;
		for (unsigned int x=0;x<v.size()-max;x++){
			if (v[x]>v[x+1]){
				int temp = v[x];
				v[x]=v[x+1];
				v[x+1]=temp;
				n=true;
			}
		}
		max++;
	} 
	return v;
}

vector <int> insertsort(vector <int> &v){
	vector <int> sorted;
	sorted.push_back(v.back());
	v.pop_back();
	while (v.size() > 0){
		int pos=0;
		int last=v.back();
		for (unsigned int x=0;x<sorted.size();x++){
			if  (last>sorted[x])
				pos=pos+1;
		}
		sorted.insert (sorted.begin()+pos,last);
		v.pop_back();
	}
	return sorted;
}
