#include<stdio.h>
#include<string.h>
main(){
	int i,fd,ld,sum;
	
	printf("Enter a Number : ");
	scanf("%d",&i);
	
	ld = i % 10 ;
	
	while(i>=10){
		i/=10;
	}
	fd=i;
	
	sum=ld+fd;
	
	printf("the sum of %d and %d of the number %d is : %d",fd,ld,i,sum);
}
