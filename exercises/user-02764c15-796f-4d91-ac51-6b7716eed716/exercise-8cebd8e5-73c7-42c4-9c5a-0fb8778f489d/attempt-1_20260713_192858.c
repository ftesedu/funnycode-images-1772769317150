#include <stdio.h>

int sum(int a[],int n){
	int i, *num = a,sum = 0;
	for(i=0;i<n;i++){
		sum+=*num;
		num++;
	}
	return sum;
}

int main(){
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	
	printf("%d",sum(a,n));
}