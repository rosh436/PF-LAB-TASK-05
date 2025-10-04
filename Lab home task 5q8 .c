#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	int result=a^(1<<1);
	printf("Original = %d, after toggle = %d", a, result);
	
}
