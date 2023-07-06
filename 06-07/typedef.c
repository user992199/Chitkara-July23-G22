#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	struct student st1;
	stu st2;
	printf("%d %d\n", st1.rn, st2.rn);
	return 0;
}