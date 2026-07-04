#include <stdio.h>
#include <stdlib.h>

int maxVal(int *arr, int n){
	int max = *arr;
	for (int p=1; p<n; p++){
		if (max<*(arr+p)){
			max= *(arr+p);
		}
	}
	return max;
}

int main(){
	
	int n;
	int a[100];
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", a+i);
	}
	printf("gia tri lon nhat: %d", maxVal(a, n));
	
	return 0;
}