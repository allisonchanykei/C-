#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Letter{
    char c;
    int freq;
};

bool operator < (const Letter &l1,const Letter &l2){
	return (l1.freq > l2.freq);
}

int main () {

    cout<<"Enter a string: ";
    string input;
    getline(cin, input);

    vector<Letter> count;
    int letters[27]= {0};

    for (unsigned int x = 0; x < input.length(); x++) {
		int c = tolower(input[x] - 'a');
		letters[c]++;
    }

    for (int x = 0; x < 26; x++) {
        if (letters[x] > 0) {
            char c = x + 'a';
            Letter temp;
			temp.c = c;
			temp.freq = letters[x];
			count.push_back(temp);
        }
    }
    
	for (unsigned int x = 0; x < input.length(); x++) {
		if (input[x]==' '){
			letters[26]++;
			cout<<input[x]<<endl;
		}
    }
	Letter temp;
	temp.c = ' ';
	temp.freq = letters[26];
	count.push_back(temp);    
	
	sort(count.begin(),count.end());
    for (unsigned int x = 0 ; x < count.size(); x++) {
        cout<<count[x].c<< " "<< count[x].freq<<endl;
    }

    return 0;
}
