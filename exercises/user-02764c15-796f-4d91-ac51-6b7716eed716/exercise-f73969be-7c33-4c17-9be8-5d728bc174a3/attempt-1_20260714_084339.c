#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float ave(int *arr,int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=*arr;
		arr++;
	}
	float TBC = (float)sum/n;
	return TBC;
}

int main(){
	//Nhap vao gia tri n
	int n=-1,i;
	while(n<=0) scanf("%d",&n);
	
	//Cap phat mang va in ra gia tri
	int *arr = (int*)malloc(n*sizeof(n));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Trung binh cong: %.2f",ave(arr,n));

	//Giai phong bo nho
	free(arr);
	
	
}