/*Write a program to print a block F using hash(#)
######
#
#
######
#
#
#
*/
#include<stdio.h>
int main(){
	for(int i=0;i<7;i++){
		if(i==0 || i== 3){
			printf("######\n");
		}
		else{
			printf("#\n");
		}
	}
	return 0;
}
