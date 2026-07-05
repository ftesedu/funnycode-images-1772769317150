//Nhập số phần tử n.
//Nhập mảng gồm n số nguyên.
//Viết hàm tính tổng sử dụng phép tăng con trỏ. 
//
//
//Đầu vào mẫu
//
//5
//1 2 3 4 5
//Output mong đợi
//Đầu ra mong đợi
//
//Tong = 15

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int a[1001];
	int sum = 0;
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
			sum += a[i];
	}
		printf("Tong = %d", sum);
	return 0;
}