/*Write a program that reads an integer and find all of its divisors.
*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number to find divisor\n");
	scanf("%d",&n);
	printf("The numbers that can divide %d are listed below\n",n);
	for(int i=n;i>0;i--){
		if(n%i==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
