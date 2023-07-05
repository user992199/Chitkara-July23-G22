#include<stdio.h>
// syntax
// struct structure_name{
//	. . .
//};
struct student {
	int roll_number;
	float score;
}st3, st4, st5[10];
int main(){
	struct student st1, st2 = {5, 99.99};
	st1.roll_number = 15;
	st1.score = 14.5;
	printf("%d -> %f\n", st1.roll_number, st1.score);
	printf("%d -> %f\n", st2.roll_number, st2.score);
	printf("%d -> %f\n", st3.roll_number, st3.score);
	printf("%d -> %f\n", st4.roll_number, st4.score);
	printf("%d -> %f\n", st5[0].roll_number, st5[0].score);
	return 0;
}