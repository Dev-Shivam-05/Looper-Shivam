#include<stdio.h>
#include<string.h>
main(){
	int i,j,count;
	count=0;
	
	printf("Enter a Number : ");
	scanf("%d", &i);
	
	j=i;
	
	while(j!=0){
		j/=10;
		count++;
	}
	
	printf("total Number of Digits Are%d : %d",i,count);
	
}
