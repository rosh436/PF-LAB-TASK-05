#include<stdio.h>
int main(){
	int num, left, right;
	printf("Enter a number:");
	scanf("%d",&num);
	left=num<<1;
	printf("Original = %d after bitwise left shift by 1 = %d", num, left);
	right=num>>1;
	printf("Original = %d after bitwise right shift by 1 = %d", num, right);
}
