#include<stdio.h>
main(){
	char ch = 'a';
	do{
		printf("%c ",ch);
		ch+=4;
	}
	while(ch<='z');
}
