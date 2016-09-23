#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector <int> separatenum(int num){
	vector <int> v;
	int i,n;
	for (unsigned int x=0;x<4;x++){
		n=pow(10,(x+1));
		i = num%n;
		num = num - i;
		i = i/pow(10,x);
		v.push_back(i);
	}
	sort(v.begin(),v.end());
	return v;
}

int main(){
	int num=0,verified=0;
	for (int z = 1; z<9999; z++){
		if (z%1111!=0){
			vector <int> v;
			v = separatenum(z);
			num=0;
			for(int y=0;y<7;y++){
				int s=0,b=0;
				for (unsigned int x=0; x<v.size();x++){
					b = b + v[x]*pow(10,x);
					s = s + v[x]*pow(10,(3-x));
				}
				num = b - s;
				v = separatenum(num);
			}
			cout<<z<<" "<<num<<" "<<endl;
			if (num == 6174){
				verified = verified +1;
			}
		}
	}
	cout<<verified;
	return 0;
}
