#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
    int random_integer;
    for(int index=0; index<10; index++){
        random_integer = 20 + int(10.0 * rand()/(RAND_MAX+1.0));
        cout << random_integer << endl;
    }
}
