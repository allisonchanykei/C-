#include <iostream>
#include <fstream>	//ofstream ifstream
#include <vector>
#include <algorithm>
using namespace std;
//reads mydata.txt into a vector. Sorts the vector alphabetically then writes sorted vector to newdata.txt

int main(){
	string line;
	vector <string> list;
	ifstream inf;
	inf.open ("mydata.txt", ios::in);	//reading
	while (getline(inf,line)){
		list.push_back(line);
		}
	inf.close();
	sort (list.begin(), list.end());
	ofstream outf;
	outf.open ("newdata.txt", ios::out);	//writing (overwrites)
	for (unsigned int x=0; x<list.size(); x++)
		outf<<list[x]<<endl;
	outf.close();
	return 0;
}
