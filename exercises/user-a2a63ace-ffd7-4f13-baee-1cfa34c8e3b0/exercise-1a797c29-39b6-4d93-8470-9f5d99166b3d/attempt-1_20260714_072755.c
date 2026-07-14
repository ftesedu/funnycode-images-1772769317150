#include <stdio.h>

void change(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    change(&a,&b);
    printf("%d %d", a, b);
    return 0;
}
