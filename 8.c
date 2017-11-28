/*Write a program to enter a number and check whether it is a multiple of
5 or not.
*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	if(num%5==0){
		printf("Yes the entered number is a multiple of 5\n");
	}else printf("No the entered number is not a multiple of 5\n");
	return 0;
}
