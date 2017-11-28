/*Write a program that reads three floating values and check if it is possible
to make a triangle with them
*/
#include<stdio.h>
int main(){
	int s1,s2,s3;
	printf("Enter length of first side\n");
	scanf("%d",&s1);
	printf("Enter length of second side\n");
	scanf("%d",&s2);
	printf("Enter length of third side\n");
	scanf("%d",&s3);
	if(s1<(s2+s3) && s2<(s1+s3) && s3<(s1+s2)){
		printf("Triangle can be formed\n");
	}else printf("Triangle can not be formed try again\n");
	return 0;
}
