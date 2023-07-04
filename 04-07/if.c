#include<stdio.h>
#define pi 3.14
#if defined(pi) && defined(print)
#else
	#undef pi
	#define pi 4.14
#endif
#define print(x) printf("%f\n", x)
int main(){
	print(pi);
	return 0;
}