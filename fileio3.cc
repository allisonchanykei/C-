#include <iostream>
#include <fstream>	//ofstream ifstream
#include <vector>
#include <algorithm>
using namespace std;
//sory mydata people by age
struct person{
	string name;
	int age;
};

//define < operator for persons to be sortable
//ex. if p1 < p2		pass by const reference
bool operator < (const person &p1,const person &p2){
	return (p1.age < p2.age);
}

//define insertion operator for persons
//cout<<p1
ostream& operator<< (ostream &o, const person &p){
	o<<p.name<<" "<<p.age;
	return o;
}

int main(){
	string name;
	int age;
	
	vector <person> list;
	ifstream inf;
	inf.open("mydata.txt", ios::in);
	while (inf >> name && inf >> age){	//extraction operator >> (space or newline delimeted)
		person temp;
		temp.age=age;
		temp.name=name;
		//cout<<temp<<endl;
		list.push_back(temp);
	}
	inf.close();
	sort (list.begin(), list.end());	//uses < to compare therefore we declared the < operator
	ofstream outf;
	outf.open ("new2data.txt", ios::out);	//writing (overwrites)
	for (unsigned int x=0; x<list.size(); x++){
		outf<<list[x]<<endl;
	}
	outf.close();
	return 0;
}
