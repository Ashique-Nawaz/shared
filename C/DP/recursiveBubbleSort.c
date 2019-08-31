#include<stdio.h>
#include<stdlib.h>

void recursiveSwap(int start,int len, int * ary){
	
	if(start == len)
		return;
	if(ary[start]<ary[start+1])
	{
		int temp = ary[start+1];
		ary[start+1]=ary[start];
		ary[start]=temp;

	}
	recursiveSwap(++start,len,ary);
}

void bubble(int len, int *ary){
	if(len==0) return;
	recursiveSwap(0,len,ary);
	bubble(len-1,ary); 
}


void main(){
	int len=0;
	printf("Enter the length of the array\n");
	scanf("%d",&len);
	int *ary = (int*) malloc(len*sizeof(int));
	printf("Enter the elements in the array\n");
	for(int i = 0; i<len ; i++)
		scanf("%d",&ary[i]);					// we cannot write ary[i] in place of &ary[i] because anyhow ary[i] returns a value and we want an address
	bubble(len-1,ary);

	printf("Sorted array is : \n");
	for(int j = 0; j<len ; j++)
		printf("%d\t",ary[j]);	
	printf("\n");
	free(ary);
}