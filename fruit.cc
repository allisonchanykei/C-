#include <stdio.h>
#include <string.h>

int main(){
	const char* fruits[]={"banana","apple","pear","orange","kiwi"};
	char **f;
	f= new char*[5];
	int x;
	for (x=0;x<5;x++){
		f[x]=new char [7];
		strncpy(f[x],fruits[x],7-1);
		printf("%s\n",f[x]);
	}
	for (x=0;x<5;x++){
		delete[] f[x];
		f[x]=0;
	}
	delete[] f;
	f=0;
	return 0;
}
