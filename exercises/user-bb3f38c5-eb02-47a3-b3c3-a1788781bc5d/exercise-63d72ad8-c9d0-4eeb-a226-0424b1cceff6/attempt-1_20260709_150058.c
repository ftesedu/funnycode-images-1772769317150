#include <stdio.h>

int maxArr(int *a, int n){
	int max = a[0];
	for(int i = 0; i < n ; i++){
		if( *(a +i) > max ){
			max = *(a+i);
		}
	}
	return max;
}



int main(){
	int n; 
	scanf("%d", &n);
	int a[10001];
	for( int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	printf("Gia tri lon nhat = %d", maxArr(a, n));
	return 0;
}