/*Given total distance travelled by a vehicle(in km) and spent fuel(in liters),
write a program to calculate the vehicle's average mileage.
*/
#include<stdio.h>
int main(){
	int distance,fuel;
	printf("Enter Distance Travelled in KM\n");
	scanf("%d",&distance);
	printf("Enter litres of fuel filled\n");
	scanf("%d",&fuel);
	printf("Average Mileage of vehicle is %d KMPL\n",distance/fuel);
	return 0;
}
