#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

int findMax(int *a, int n ){
	int max = *a;
	int *p = a + 1;
	for(int i = 0; i < n; i++){
		if(*p > max){
			max = *p;
		} p++;
	} return max;
} int main(){
	int n;
	int a[100000];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	} printf("Gia tri lon nhat = %d", findMax(a, n));
	return 0;
}
