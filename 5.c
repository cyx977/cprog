/*Write a program to enter three numbers and find out whether all of them are
equal or none of them are equal*/
#include<stdio.h>
int main(){
	int num[3];
	printf("Enter first number\n");
	scanf("%d",&num[0]);
	printf("Enter second number\n");
	scanf("%d",&num[1]);
	printf("Enter third number\n");
	scanf("%d",&num[2]);
	if(num[0]==num[1] && num[0]==num[2]){
		printf("All numbers are equal\n");
	}else if(num[0] == num[1] || num [0] == num[2] || num[1] == num[2]){
		printf("Two numbers are equal\n");
	}else printf("None of them are equal\n"); 
	return 0;
}

