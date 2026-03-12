#include <stdio.h>

int main(){
	long long n;
	scanf("%lld", &n);
	int money[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int count = 0; 
	for (int i = 0; i < 10; i++){
		count += n / money[i];
		n %= money[i];
	}
	printf("%d", count);
	return 0;
}
