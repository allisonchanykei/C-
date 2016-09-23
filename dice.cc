#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned>(time(0))); 
	for (int x=0;x<10;x++){
	
	int ra = 1 + int(6.0 * rand()/(RAND_MAX+1.0));
	int rb = 1 + int(6.0 * rand()/(RAND_MAX+1.0));
    int t =ra+rb;
    cout << "The total number is: "<<t<< endl;
}
    return 0;
}
