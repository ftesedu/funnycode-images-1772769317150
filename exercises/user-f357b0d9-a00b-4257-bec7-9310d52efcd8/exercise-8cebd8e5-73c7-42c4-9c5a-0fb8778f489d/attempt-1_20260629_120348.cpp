#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tinhSum(int *a, int n){
	int sum = 0;
	int *p = a;
	for(int i = 0; i < n; i++){
		sum += *p;
		p++;
	} return sum;
}

int main(){
	int n;
	int a[10000];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		
	}
	printf("\n");
	printf("Tong = %d", tinhSum(a, n));
	return 0;
}