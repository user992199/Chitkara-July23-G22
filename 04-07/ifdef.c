#include<stdio.h>
#define pi 3.14
// syntax
// #ifdef macro_name
#ifdef pi 
	#define print(x) printf("%f\n", x)
#else
	#define pi 4.14
	#define print(x) printf("%f\n", x)
#endif
int main(){
	print(pi);
	return 0;
}