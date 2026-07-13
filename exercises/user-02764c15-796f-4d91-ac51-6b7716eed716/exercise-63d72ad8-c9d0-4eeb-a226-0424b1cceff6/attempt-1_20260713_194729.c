#include <stdio.h>

int max(int arr[],int n){
	int i, *num = arr, max = -100;
	for(i=0;i<n;i++){
		if(max<=*num){
			max = *num;
			num++;
		}
	}
	return max;
}

int main(){
	// Nhap vao gia tri n
	int n=-1,i;
	while(n<0) scanf("%d",&n);
	
	// Nhap vao cac so trong mang
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	
	// In ra gia tri lon nhat
	printf("%d",max(arr,n));
}