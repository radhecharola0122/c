#include<stdio.h>
void main(){
	int H,M,S;
	printf("Enter number of second : ");
	scanf("%d",&S);
	H = S/3600;
	S = S-(H*3600);
	M = S/60;
	S = S-(M*60);
	printf("Time = %d:%d:%d",H,M,S);
	}
