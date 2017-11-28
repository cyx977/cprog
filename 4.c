/*Write a program to compute the perimeter and area of a square whose side
length is given by user
*/
#include<stdio.h>
int main(){
	int length;
	printf("Enter Length of the square\n");
	scanf("%d",&length);
	printf("The area is %d\n",length*length);
	printf("Perimeter is %d\n",4*length);
	return 0;
}

