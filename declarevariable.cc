#include <iostream> // for cout
using namespace std; // standard namespace

int main(){

	int i (-1);
	unsigned int ui (1);
	short s(9);
	float f(-15.5);
	double d(9.11e-33);
	char c('A');
	char c2(66);
	bool b (true);
	bool b2 (88);
	
	
	cout<< "int "<<sizeof(i)<<endl;
	cout<< "unsigned int "<<sizeof(ui)<<endl;
	cout<< "short "<<sizeof(s)<<endl;
	
	int* p=0;
	cout<<*p;
	
	cout<< "float "<<sizeof(f)<<endl;
	cout<< "double "<<sizeof(d)<<endl;
	cout<< "char "<<sizeof(c)<<endl;
	cout<< "char c2 "<<c2<<" with a size of "<<sizeof(c2)<<endl;
	cout<< "bool "<<sizeof(b)<<endl;
	cout<< "bool b2 "<<b2<<" "<<b<<endl;
	
	return 0;
}
