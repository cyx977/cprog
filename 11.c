/*Write a program to print all the numbers from 1 to 100 that are multiple of
7.
*/
#include<stdio.h>
int main(){
	for(int i=0;i<=100;i++){
		if(i%7==0){
			printf("%d\n",i);
		}
	}
	return 0;
}

