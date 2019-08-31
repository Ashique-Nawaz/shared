#include<stdio.h>
#include<stdlib.h>

int maxSubArray(int* ary,int aryLen,int *start,int *end){
	
	int currentSum=0,maxSum=0,currentStart=0,currentEnd=0;
	for(int i=0;i<aryLen;i++){
		currentEnd=i;
		currentSum+=ary[i];
		if(currentSum<=0){
			currentSum=0;
			currentStart=i+1;
		}
		else if(currentSum > maxSum){
			maxSum=currentSum;
			*start=currentStart;
			*end = currentEnd;
		}
	}
	return maxSum;
}

void main()
{
	int sum = 0,start = -1,end = -1;
	int aryLen = 0, allPositive = 1;
	printf("Enter the length of the array: \t");
	scanf("%d",&aryLen);
	int* ary = (int*) malloc(aryLen*sizeof(int));

	printf("\nEnter the elements in the array:\n");
	for(int i=0;i<aryLen;i++){
		scanf("%d",&ary[i]);
		sum += ary[i];
		if(ary[i]>0){
			allPositive =0;	
		}
	}
	if(allPositive)
	{
		printf("Max sum is :%d 	and the the sub array is the original array itself \n",sum);
		return;
	}
	sum = maxSubArray(ary,aryLen,&start,&end);
	printf("Max sum is :%d 	and the the sub array is: \n",sum);

	for(int j=start;j<=end;j++){
		printf("%d ",ary[j]);
	}
	free(ary);
}