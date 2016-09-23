#include <iostream>
#include <vector>
using namespace std;

typedef vector <int> Dvector;
typedef vector <Dvector> Dmatrix;

Dmatrix get();
Dmatrix trans(const Dmatrix &);
void disp(const Dmatrix &);

int main (){
	Dmatrix a = get();
	disp (a);
	cout<<endl<<endl;
	Dmatrix b = trans (a);
	disp (b);
	return 0;
}

Dmatrix get(){
	Dmatrix vecvec;
	int val;
	int sizer,sizec;
	cin>>sizer;
	cin>>sizec;
	for (int x=0;x<sizer;++x){
		Dvector temp;
		for (int y=0;y<sizec;++y){
			cin>>val;
			temp.push_back(val);
		}
		vecvec.push_back(temp);
	}
	return vecvec;
}
Dmatrix trans(const Dmatrix &mat){
	Dmatrix newvec;
	for (unsigned int y=0;y<mat[0].size();++y){
		Dvector temp;
		for (unsigned int x=0;x<mat.size();++x){
			temp.push_back(mat[x][y]);
		}
		newvec.push_back(temp);
	}
	return newvec;
}
	
void disp(const Dmatrix & mat){
	for (unsigned int x = 0; x < mat.size(); ++x) {
		for (unsigned int y = 0; y < mat[x].size(); ++y) {
			cout << mat[x][y]<<" ";
		}
		cout << endl;
	}
}
