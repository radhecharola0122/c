#include<stdio.h>
void main (){
	int a,b,qua,rem;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	qua = a/b;
	rem = a%b;
	printf("qua = %d\n",qua);
	printf("rem = %d",rem);
}
