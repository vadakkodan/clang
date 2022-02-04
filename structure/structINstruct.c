#include<stdio.h>
#include<stdlib.h>
int main() {
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

	struct car car1;

	printf ("Enter the car number, startig time and ending time of car 1 :\n");
	scanf ("%d %d %d %d %d %d %d", &car1.car_no, &car1.starting_time.hour, &car1.starting_time.minute,&car1.starting_time.second, &car1.ending_time.hour, &car1.ending_time.minute, &car1.ending_time.second);
	printf("Car Number: %d\t Starting Time: %d:%d:%d\t Ending Time: %d:%d:%d\n", car1.car_no, car1.starting_time.hour, car1.starting_time.minute,car1.starting_time.second, car1.ending_time.hour, car1.ending_time.minute, car1.ending_time.second);
	printf ("%d\n", sizeof(car1));	
	return 0;
}

