#include<stdio.h>
void main(){
	int s,m,h;
	printf("Enter value of s : ");
	scanf("%d",&s);
	h = s/3600;
	s = s-(h*3600);
	m = (s/60);
	s = s-(m*60);
	printf("time = %02d:%d:%d",h,m,s);
}
