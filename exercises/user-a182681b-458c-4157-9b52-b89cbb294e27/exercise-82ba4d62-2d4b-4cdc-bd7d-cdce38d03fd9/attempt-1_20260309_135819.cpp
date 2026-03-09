#include<stdio.h>

int main(){
    int n;	
    scanf("%d", &n);

    double S = 0;

    for(int i = 1; i <= n; i++){
        S += 1.0 / i;  // S = S + 1/i
        /* vi du nhap n=3
        ban dau S=0
                        n=1
        thi code la s = s + 1/i
                        0 + 1/1 = 1
                        n=2 
                        s = s + 1/i
                        1 + 1/2 = 1.5
                        tinh toi vong lap 3
		*/
    }

    printf("%.3lf", S);

    return 0;
}
