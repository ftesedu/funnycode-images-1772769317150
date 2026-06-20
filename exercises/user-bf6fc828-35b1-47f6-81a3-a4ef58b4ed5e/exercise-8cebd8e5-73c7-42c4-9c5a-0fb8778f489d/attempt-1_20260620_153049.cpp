#include <iostream>

using namespace std;
int tinhTong(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *arr; 
        arr++;       
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = tinhTong(arr, n);
    cout << "Tong = " << result << endl;
    delete[] arr;
    return 0;
}