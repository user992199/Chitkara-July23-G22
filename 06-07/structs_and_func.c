// #include<stdio.h>
// #define pi 3.14
// #ifdef pi
// #endif
// void print_int(int a){
// 	printf("%d\n", a);
// }
// struct student{
// 	int rn;
// 	float s;
// };
// void print_student(struct student s1){
// 	printf("%d - %f\n", s1.rn, s1.s);
// }
// int main(){
// 	int a = 17;
// 	print_int(a);
// 	struct student s1 = {15, 17.234};
// 	print_student(s1);
// 	return 0;
// }



#include<stdio.h>
#define pi 3.14
#ifdef pi
	#undef pi
	#define pi 4.5
#endif
int main(){
	printf("%f\n", pi);
	return 0;
}