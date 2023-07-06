// #include<stdio.h>
// typedef struct course{
// 	char cn;
// 	int cc;
// }cse;
// struct student{
// 	int rn;
// 	float score;
// 	struct course c1;
// 	cse c2;
// };
// int main(){
// 	struct student st1;
// 	st1.c1.cc = 13;
// 	printf("%d\n", st1.c1.cc);
// 	return 0;
// }
#include<stdio.h>
struct student{
	int rn;
	float score;
	struct course{
		char cn;
		int cc;
		// struct student s3; // this will give us an error
	};
	struct course c1;
};
int main(){
	struct course c3;
	struct student st1;
	st1.c1.cc = 13;
	printf("%d\n", st1.c1.cc);
	printf("%d\n", c3.cc);
	return 0;
}