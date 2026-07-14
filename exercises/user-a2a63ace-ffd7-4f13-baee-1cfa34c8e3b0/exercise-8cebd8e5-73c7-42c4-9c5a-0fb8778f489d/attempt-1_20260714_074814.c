#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int sum = 0;
    int *ptr = arr;

    for(int i = 0; i < N; i++){
        scanf("%d", ptr);
        sum += *ptr;
        ptr++;

    }
    printf("%d", sum);

    return 0;
}
