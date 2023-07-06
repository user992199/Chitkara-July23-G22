#include<stdio.h>
typedef struct student{
	int rn;
	float s;
	 // friend pointer can store the address of another variable of structure student
	struct student * friend;
}stu;
int main(){
	stu s1, s2;
	stu * sptr = &s1;
	sptr -> rn = 13;
	sptr -> s = 54.36;
	s1.friend = &s2;
	s1.friend -> rn = 15;
	printf("%d %d\n", s1.rn, sptr -> rn);
	printf("%d %d\n", s2.rn, s1.friend -> rn);
	printf("%f %f\n", s1.s, sptr -> s);
	return 0;
}