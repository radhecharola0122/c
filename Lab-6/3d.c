#include<stdio.h>
void main(){
	int a,b,c,rem1,rem2,rem3,sum,avg;
	printf("Enter value of a : ");
	scanf("%d",&a);
	rem1 = a%10;
	printf("Enter value of b : ");
	scanf("%d",&b);
	rem2 = b%10;
	printf("Enter value of c : ");
	scanf("%d",&c);
	rem3 = c%10;
	printf("rem1 : rem2 : rem3 = %d:%d:%d\n",rem1,rem2,rem3);
	sum = rem1+rem2+rem3;
	printf("sum = %d\n",sum);
	avg = (rem1+rem2+rem3)/3;
	printf("avg = %d\n",avg);
} 
