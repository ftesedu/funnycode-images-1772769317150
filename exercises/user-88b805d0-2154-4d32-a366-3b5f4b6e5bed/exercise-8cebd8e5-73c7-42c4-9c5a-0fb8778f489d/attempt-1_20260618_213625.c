#include <stdio.h>

int sumPtr(int a[], int *ptr){
	int sum=0;
	for(int i=0; i<*ptr; i++){
		sum+=*(a+i);
		
	} return sum;
}

int main()
{
	int n;
	int *ptr1;
	ptr1=&n;

	scanf("%d", ptr1);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", a+i);
	}
	printf("%d", sumPtr(a, ptr1));
	
	return 0;
}