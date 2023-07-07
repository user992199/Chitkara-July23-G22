#include<stdio.h>
typedef struct student{
	int rn;
	int s;
}stu;
void sort_arc_score(stu sa[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(sa[j].s < sa[j+1].s){
				stu temp = sa[j];
				sa[j] = sa[j+1];
				sa[j+1] = temp;
			}
		}
	}
}
void print_ranks(stu sa[], int n){
	for(int i = 0; i < n; i++){
		printf("%d | %d | %d\n", i+1, sa[i].rn, sa[i].s);
	}
}
int main(){
	stu s_arr[5];
	int n = sizeof(s_arr)/sizeof(s_arr[0]);
	for(int i = 0; i < n; i++){
		s_arr[i].rn = i+1;
 	}
 	s_arr[0].s = 20;
 	s_arr[1].s = 15;
 	s_arr[2].s = 13;
 	s_arr[3].s = 17;
 	s_arr[4].s = 16;
 	sort_arc_score(s_arr, n);
 	print_ranks(s_arr, n);
	return 0;
}