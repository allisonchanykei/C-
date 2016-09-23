#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Letter{
	char c;
	int num;
};

bool operator < (const Letter &l1,const Letter &l2){
	return (l1.num < l2.num);
}

vector <Letter> bubblesort(vector <Letter> &v){
	bool n = true;
	while (n){
		n=false;
		int max = 1;
		for (unsigned int x=0;x<v.size()-max;x++){
			if (v[x+1]<v[x]){
				Letter temp = v[x];
				v[x]=v[x+1];
				v[x+1]=temp;
				n=true;
			}
		}
		max++;
	} 
	return v;
}

ostream& operator<< (ostream &o, const Letter &l){
	o<<l.c<<" "<<l.num;
	return o;
}
int main(){
	vector <Letter> list;
	int num;
	char c;
	ifstream f;
	f.open("/home/junior/bigbook.txt", ios::in);
	for (int x = 97; x <= 122; x++){
		num=0;
		while (f.get(c)){
			if (tolower(c) == char(x))
				num = num + 1;
		}
		f.clear();
		f.seekg(0);
		if (num > 0){
			Letter temp;
			temp.c = char (x);
			temp.num = num;
			list.push_back(temp);
		}
	}
	f.close();
	bubblesort(list);
	for (unsigned int x=0;x<list.size();x++)
		cout<<list[x]<<endl;
	return 0;
}
