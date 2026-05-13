#include <stdio.h>

int main() {
    int a[5];
    for(int i = 0; i < 5; i++){
        printf("0x%x\n", &a[i]);
    }
    return 0;
}