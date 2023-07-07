#include<stdio.h>
// void print(int arr[], int n){
// 	for(int i = 0 ; i < n ; i++){
// 		printf("%d ", arr[i]);
// 	}printf("\n");
// }
// void update(int arr[], int n){
// 	for(int i = 0 ; i < n ; i++){
// 		arr[i] += 10;
// 	}
// 	print(arr, n);
// }
struct int_arr{
	int arr[10];
	int n;
};
void print_struct(struct int_arr a1){
	for(int i = 0 ; i < a1.n ; i++){
		printf("%d ", a1.arr[i]);
	}printf("\n");
}
void update_struct(struct int_arr a1){
	for(int i = 0 ; i < a1.n ; i++){
		a1.arr[i] += 10;
	}
	printf("func: ");
	print_struct(a1);
}
int main(){
	// int arr[] = {1, 2, 3, 4, 5};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// print(arr, n);
	// update(arr, n);
	// print(arr, n);
	struct int_arr a1;
	a1.n = 10;
	for(int i = 0; i < a1.n; i++){
		a1.arr[i] = i+1;
	}
	print_struct(a1);
	update_struct(a1);
	print_struct(a1);
	return 0;
}