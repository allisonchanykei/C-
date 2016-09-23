#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

short dice (short &, short &, short &);
void losef (int &, int &, int &, int &);
void winf (int &, int &, int &);
int main(){
	srand(static_cast<unsigned>(time(0))); 
	int win = 0, lose = 0;
	int bet = 2,won=0;
	int mb=0;
	for (int x=0;x<10000;x++){
		short a,b,c;
		dice (a,b,c);
		if (c == 2 || c==3 || c==12){
			losef (lose, won, bet, mb);
		}
		else if (c == 7 || c==11){
			winf(win, won, bet);
		}
		else{
			int mark = c;
			while (true){
				dice (a,b,c);
				if (c == 7){
					losef (lose, won, bet, mb);
					break;
				}
				else if ( c == mark){
					winf(win, won, bet);
					break;
				}
			}
		}
	}
	cout<<win<<" wins|losses "<<lose<<endl;
	cout<<"You won $"<<won<<endl;
	cout<<"Your maximum bet is $"<<mb<<endl;
	return 0;
}
short dice (short &a, short &b, short &c){
	a = 1 + int(6.0 * rand()/(RAND_MAX+1.0));
	b = 1 + int(6.0 * rand()/(RAND_MAX+1.0));
    c =a+b;
	return c;
}
void losef (int &lose, int &won,int &bet,int &mb){
	lose = lose + 1;
	won = won-bet;
	bet = bet * 2;
	if (mb < bet)
		mb=bet;
}
void winf(int &win, int &won,int &bet){
	win = win +1;
	won = bet + won;
	bet=2;
}
