#include <stdio.h>
#include <stdlib.h>

int sum (int *a, int n){
	int res = 0;
	for(int i = 0; i < n; i++){
		res += *(a+i);
	}
	return res;
} 

int main(){
    int n;
    scanf("%d", &n);
    int *a = (int*)calloc(n, sizeof(int));
    if(a == NULL){
    	printf("Khong du bo nho cap phat!");
    	return 0;
	}
    for(int i = 0; i < n; i++){
    	scanf("%d", a+i);
	}
	printf("Tong = %d", sum(a, n));
	free(a);
    return 0;
}
