#include <stdio.h>

int main() {
    int N;
    if(scanf("%d", &N) != 1 ) {
        return 1;
    }
    int a[N];
    int *ptr = a;
    int max;


    for(int i = 0; i < N; i++){
        scanf("%d", ptr);
        if( i == 0){
            max = *ptr;
        }
        if( *ptr > max){
            max = *ptr;
        }
        ptr++;
    }
    printf("%d", max);
 return 0;
}
