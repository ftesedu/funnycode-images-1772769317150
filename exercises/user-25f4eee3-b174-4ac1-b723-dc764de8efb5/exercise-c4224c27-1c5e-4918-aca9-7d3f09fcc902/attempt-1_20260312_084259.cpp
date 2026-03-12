#include <stdio.h>
#include <string.h>
int main(){
	char s[100005];
	fgets(s, sizeof(s), stdin);
	int len = strlen(s);
	int left = 0, right = len - 1;
	while (left < right){
		if (left != right){
			printf ("NO");
			return 0;
		}
		left++;
		right--;
	}
	printf("YES");
	return 0;
}
