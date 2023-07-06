#include<stdio.h>
typedef struct student{
	int rn;
	float s;
}stu;
int main(){
	int a = 19;
	// syntax
	// datatype * pointer_name;
	int * aptr;
	aptr = &a;
	// printf("%d == %d\n", &a, aptr);
	stu s1;
	stu * sptr1 = &s1;
	struct student * sptr2 = &s1;
	printf("%d %d\n", sptr1, sptr2);
	return 0;
}