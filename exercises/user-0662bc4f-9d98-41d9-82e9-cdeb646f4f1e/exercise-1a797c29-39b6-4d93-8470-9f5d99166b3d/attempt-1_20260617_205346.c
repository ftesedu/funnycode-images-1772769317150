#include <stdio.h>
void swap (int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    if(scanf("%d %d",&a,&b) !=2) return 0;
    swap(&a,&b);
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}