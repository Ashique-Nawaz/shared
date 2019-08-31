#include<stdio.h>
#include<stdlib.h>

void invert(int * ary, int end){
	
	int temp,mid=end/2,i=0;
	while(i<=mid){
		temp=ary[i];
		ary[i]=ary[end-i];
		ary[end-i++]=temp;
	}
}
void paratha(int * ary, int last){
	if(last == 0) return;
	for(int i=0 ; i<last ;i++){
		if(ary[i]>ary[i+1]){
			invert(ary,i);
			invert(ary,i+1);
			paratha(ary,i+1);
		}
	}
}

void main(){
	
	int len;
	printf("Enter the length of the array\n");
	scanf("%d",&len); 
	int * ary = (int* ) malloc(len*sizeof(int));

	printf("Enter the elements in the array\n");
	for(int i=0;i<len;i++){
		scanf("%d",&ary[i]);
	}
	
	paratha(ary,len-1);
	printf("The resultant array is :\n");
	for(int i = 0 ; i<len ; i++){
		printf("%d\n",ary[i]);
	}

	free(ary);
}



/*
void win(int currentSum){
	int person2Input=0;
	if(currentSum<5){
		printf("\nComputer throws %d\n You throws ",5-currentsum);
		scanf("%d",person2Input);
		win(5+person2Input);
	}
	else if(currentSum>=5&&currentSum<10){
		printf("\nComputer throws %d\n You throws ",9-currentSum);
		scanf("%d",person2Input);
		win(9+person2Input);
	}
	else{
		printf("\nComputer wins by throwing %d",15-currentSum);
	}
}*/