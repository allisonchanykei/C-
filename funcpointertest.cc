#include <iostream>
using namespace std;

void one(float a, float b) { cout << a+b << "\n"; }
void two(float a, float b) { cout << a*b << "\n"; }
void three(float a, float b) { cout << a/b << "\n"; }
void four(float a, float b) { cout << a-b << "\n"; }
int main()
{
	void (*fptr[4])(float, float);
	fptr[0] = one;
	fptr[1] = two;
	fptr[2] = three;
	fptr[3] = four;

	fptr[0](12, 3); //one(12, 3)
	one(12,3);
	fptr[1](5, 4); //two(5, 4)
	two(5,4);
	fptr[2](9,2); //three(9,2)
	three(9,2);
	fptr[3](2,5); //four(2,5)
	four(2,5);
	return 0;
}
