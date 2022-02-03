//An array hold a number of same data type. Here the struct is a similar data type.
//In this exercise we are going to get the deatils of 3 cars
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i=0;
	struct time {
		int hour;
		int minute;
		int second;
	}; // Will capture the time details here

	struct car {
		int car_no;
		struct time starting_time;
		struct time ending_time;
	};

	struct car car1[3];

	while(i<3) {
		printf ("Enter the car number, startig time and ending time of car %d :\n", i+1);
		scanf ("%d %d %d %d %d %d %d", &car1[i].car_no, &car1[i].starting_time.hour, &car1[i].starting_time.minute,&car1[i].starting_time.second, &car1[i].ending_time.hour, &car1[i].ending_time.minute, &car1[i].ending_time.second);
		i++;
	}
	i =0;
	while(i<3) {
	printf("Car Number %d: %d\t Starting Time: %d:%d:%d\t Ending Time: %d:%d:%d\n",i+1, car1[i].car_no, car1[i].starting_time.hour, car1[i].starting_time.minute,car1[i].starting_time.second, car1[i].ending_time.hour, car1[i].ending_time.minute, car1[i].ending_time.second);
	i++;
	}
//	printf ("%d\n", sizeof(car1));	
	return 0;
}

