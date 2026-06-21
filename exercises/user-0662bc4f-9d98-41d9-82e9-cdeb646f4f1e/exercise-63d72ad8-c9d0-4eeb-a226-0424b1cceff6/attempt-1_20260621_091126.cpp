#include <iostream>
using namespace std;

long long giatrimax(int *ptr,int n){
    long long max = ptr[0];
    for(int i = 0;i<n;i++){
        if(ptr[i] > max){
            max = ptr[i];
        }
    }
    return max;
}
int main(){
    int n;
    if(!(cin >> n)) return 0;
    int *a = new int[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    cout << "Gia tri lon nhat = " << giatrimax(a,n) << endl;
    return 0;
}