#include <stdio.h>

int swap(int *a,int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a,b;
	printf("A = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	
	
	swap(&a,&b);
	printf("\nA = %d",a);
	printf("\nB = %d",b);
}