/*Write a program that reads five numbers and counts the number of positive
numbers and negative numbers.
*/
#include<stdio.h>
int main(){
	int p=0;
	int n[5];
	//read 5 numbers
	for(int i=0;i<5;i++){
		printf("Enter number at index %d\n",i);
		scanf("%d",&n[i]);
	}
	//counting positive
	for(int i=0;i<5;i++){
		if(n[i]>=0){
			p++;
		}
	}
	printf("You entered %d positive numbers and %d negative numbers\n",p,5-p);
	return 0;
}
