#include<stdio.h>
int main () {

	void swap(int *x, int *y) {
		int temp = *x;
		*x = *y;
		*y = temp;
	}
	int a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	swap(&a, &b);
	printf("\nSau khi hoan doi:\n");
	printf("a = %d\n", a);
	printf("b = %d", b);
	return 0;
}
