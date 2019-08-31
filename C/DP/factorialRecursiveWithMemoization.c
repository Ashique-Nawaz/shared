#include<stdio.h>
#include<stdlib.h>

#define MAXLEN 1024

int factorial(int * ary, int input){
	
	if(input == 0 || input == 1) return 1;
	return ary[input]=input*factorial(ary, input-1);
}

void main(){
	int input=0;
	char try_again='Y';
	int * ary = malloc(MAXLEN * sizeof(int));
	while(try_again=='Y'||try_again=='y'){
	printf("Enter the number to find the factorial\n");
	scanf("%d",&input);
	printf("Factorial of %d is %d",input,factorial(ary,input));
	printf("Find another factorial ?\n press 'y'");
	scanf("%s",&try_again);
	}
	free(ary);
}