#include<stdio.h>
// syntax
// #define macro_name value
#define pi 3.14 + 1
#define print_hello printf("hello\n")
#define print_f(x) printf("%f\n", x);
#define sq(x) x*x
int main(){
	int r = 7;
	// float pi = 3.14 + 1;
	float ans = 2 * pi * r;
	float square = sq(ans);
	print_f(square);
	print_hello;
	return 0;
}