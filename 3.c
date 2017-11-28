/*Write a program to comput the perimeter and area of a rectangle
with a length of 10cm and breadth of 7cm
*/
#include<stdio.h>
int main(){
	int length = 10, breadth = 7;
	printf("Length = %d Breadth = %d\n",length,breadth);
	printf("The area is %d\n",length*breadth);
	printf("The perimeter is %d\n",2*(length*breadth));
	return 0;
}
