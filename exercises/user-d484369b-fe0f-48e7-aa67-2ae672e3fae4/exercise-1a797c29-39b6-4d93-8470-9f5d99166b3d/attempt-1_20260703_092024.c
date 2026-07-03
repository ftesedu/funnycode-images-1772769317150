#include <stdio.h>


void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b;
	
	int *pa = &a;	
	int *pb = &b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);	
	swap(pa, pb);
	printf("Sau khi hoan doi:\n");
	printf("a = %d\n", a);
	printf("b = %d", b);
	
	
	return 0;
}