#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

vector <string> vpickle (string f){
	vector <string> v;
	ifstream inf;
	string line;
	inf.open(f.c_str(), ios::in);	//does not accept c++ string hence convert to cstring
	while (getline(inf,line))
		v.push_back(line);
	inf.close();
	return v;
}

bool vdump (vector <string> v, string f){
	ofstream ouf;
	ouf.open(f.c_str(), ios::out);
	for (unsigned int x=0; x<v.size(); x++)
		ouf<<v[x]<<endl;
	ouf.close();
	return true;
}

int main (int argc, char* argv[]){
	vector <string> vect (3," hello test");
	string f1 = argv[1];
	string f2 = argv[2];
	vector <string> newvect = vpickle (f1);
	for (unsigned int x=0; x<newvect.size(); x++)
		cout<<newvect[x]<<endl;
	cin.get();
	cout<<endl;
	if (vdump (vect, f2))
		cout<<"File successfully saved";
	else cout<<"Failed";
	return 0;
}
