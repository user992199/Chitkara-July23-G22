#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	int a = 19;
	printf("%d => %d\n", &a, a);
	stu st1;
	printf("%d\n",&st1);
	return 0;
}