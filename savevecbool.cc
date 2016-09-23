#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool vpickle (string f,vector <string> &v){
	try{
		v.clear();	//to ensure the vector is empty
		ifstream inf;
		string word;
		inf.open(f.c_str(), ios::in);	//does not accept c++ string hence convert to cstring
		while (inf >> word)
			v.push_back(word);
		inf.close();
	}
	catch(int e) {
		cout<<"Error code: "<<e<<endl;
		return false;
	}
	return true;
}

bool vdump (vector <string> v, string f){
	try {
		ofstream ouf;
		ouf.open(f.c_str(), ios::out);
		if (!ouf.good())	//need to check if file is truly open in case it's a read-only directory
			throw (1);
		for (unsigned int x=0; x<v.size(); x++)
			ouf<<v[x]<<endl;
		ouf.close();
	}
	catch(int e) {
		cout<<"Error code: "<<e<<endl;
		return false;
	}
	return true;
}

int main (int argc, char* argv[]){
	string f1 = argv[1];
	string f2 = argv[2];
	vector <string> vec1;
	vector <string> vec2(3, "hello test");
	if (vpickle (f1,vec1)){
		cout<<"Success"<<endl;
		for (unsigned int x=0; x<vec1.size(); x++)
			cout<<vec1[x]<<endl;
	}
	else cout<<"Failed"<<endl;
	cin.get();
	if(vdump (vec2, f2))
		cout<<"File successfully saved"<<endl;
	else cout<<"File unable to save"<<endl;
	return 0;
}
