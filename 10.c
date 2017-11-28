/*Write a program that reads 5 numbers and prints the sum of odd numbers only
*/
#include<stdio.h>
int main(){
	int n[5], sum=0;
	for(int i=0;i<5;i++){
		printf("Enter number at index %d\n",i);
		scanf("%d",&n[i]);
	}
	for(int i=0;i<5;i++){
		if(n[i]%2!=0){
			sum+=n[i];
		}
	}
	printf("The sum of odd numbers entered is %d\n",sum);
	return 0;
}
