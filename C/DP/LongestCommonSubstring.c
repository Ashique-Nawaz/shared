/*
 *
 *	Find Longest Common Substring
 *
 */


#include<stdio.h>
#include<stdlib.h>

ary[strLen1][strLen2]=0;

function(str1,len1,strLen1,str2,len2,strLen2):
	if str1[len1]==str2[len2], return ary[len1][len2] = 1+ function(str1,len1,strLen1,str2,len2,strLen2);
	else
		return 0;

function1(str1,str2,strLen1,strLen2,ary[][]):
	i=j=0
	while(i<strLen1)
		while(j<strLen2)
			if(ary[i][j]<0){
				function(str1,i,strLen1,str2,j,strLen2);
			}


void main(){
	take input from user in two arrays;
	call function1;
}