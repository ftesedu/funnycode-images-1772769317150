#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}
int main(){
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	swap(&a, &b);
	printf("\n");
	printf("Sau khi  hoan doi:\n");
	printf("%d\n", a);
	printf("%d", b);
	return 0;
}