#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int n;
	int *a;
	int *p;
	long long sum = 0;
	double avg;
	
	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));
	if (a == NULL) {
        return 1;
    } p = a;
	for(int i = 0; i < n; i++){
		scanf("%d", p);
		sum += *p;
		p++;
	} avg = (double)sum / n;
	printf("Trung binh cong = %.2lf", avg);
	free(a);
	return 0;
	
}