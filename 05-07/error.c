#include<stdio.h>
#define pi 3.14
#define print(x) printf("%f\n", x)
#if !defined(print)
	#error print if not defined yet
#endif
int main(){
	print(pi);
	return 0;
}