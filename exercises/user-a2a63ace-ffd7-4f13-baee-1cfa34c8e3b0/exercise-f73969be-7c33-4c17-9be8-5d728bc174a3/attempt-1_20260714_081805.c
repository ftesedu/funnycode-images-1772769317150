#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if(scanf("%d", &n) != 1 || n <=0){
        return 1;
    }
    int *a =(int *)malloc(n*sizeof(int));
    if(a==NULL){
        return 1;
    }
    int *ptr = a;
    int sum = 0;
    double average = 0;

    for( int i = 0; i < n; i++){
            scanf("%d", ptr);
            sum += *ptr;
            ptr++;
    }
    average = (double)sum / n;
    printf("%.2lf\n", average);

    free(a);

 return 0;
}
