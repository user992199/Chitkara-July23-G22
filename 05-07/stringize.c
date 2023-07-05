#include<stdio.h>
#define print(x) printf(#x "\n");
int main(){
	int a = 10 + 5;
	print(a);
	print(3.14);
	return 0;
}