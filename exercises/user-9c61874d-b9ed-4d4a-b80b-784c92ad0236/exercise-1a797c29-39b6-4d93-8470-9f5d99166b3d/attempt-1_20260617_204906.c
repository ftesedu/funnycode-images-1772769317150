#include <stdio.h>

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Sau khi hoan doi:\n");
    printf("a = %d\nb = %d", a, b);
    return 0;
}
