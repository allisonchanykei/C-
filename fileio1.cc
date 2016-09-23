#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string word;
	ifstream f;
	f.open("mydata.txt", ios::in);

	while (getline(f,word)){	//line delimeted
		cout<<word<<endl;
	}
	f.clear();	//clear eof state flag from true to false
	f.seekg(0);	//set seek get file pointer to beginning of file
	//f.seekg(0,ios::beg);

	while (f>>word){	//space delimited
		cout<<word<<endl;
	}
	f.clear();
	f.seekg(0);	//set seek get file pointer with offset

	while(!f.eof()){
		getline(f,word);
		cout<<word<<endl;
	}
	f.close();
	return 0;
}
