#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main(){

    int n;
    if(!(cin >> n) || n <= 0) return 0;
    int *arr = (int*) malloc(n*sizeof(int));

    if(arr == NULL){
        return 1;
    }
    double sum = 0;
    for(int i = 0;i<n;i++){
        cin >> *(arr + i); //or cin >> arr[i]
        sum += *(arr + i);
    }

    double avg = sum/n;
    cout << fixed << setprecision(2); //float 2 so thap phan 25.00
    cout << "Trung binh cong = " << avg << endl;
    free(arr);

    return 0;
}