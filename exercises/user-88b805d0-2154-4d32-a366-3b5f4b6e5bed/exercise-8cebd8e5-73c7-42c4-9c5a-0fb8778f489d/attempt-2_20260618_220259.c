#include <stdio.h>

int sumPtr(int a[], int *ptr){//tinh tong tat ca phan tu trong mang
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

	
	do{ 
		scanf("%d", ptr1);
		if(n<0)
		printf("Invalid!, re-enter n:");
		else
		break;
	}while (n<0);
	
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", a+i);
	}
	printf("%d", sumPtr(a, ptr1));
	
	return 0;
}