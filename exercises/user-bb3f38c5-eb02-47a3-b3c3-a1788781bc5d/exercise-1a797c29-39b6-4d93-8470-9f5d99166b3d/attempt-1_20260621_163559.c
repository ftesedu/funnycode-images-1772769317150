#include <stdio.h>

// Hàm swap chỉ nhận con trỏ và hoán đổi giá trị
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. Khai báo 2 biến a và b ở đây để sửa lỗi "undeclared"
    int a, b; 
    
    // 2. Nhập dữ liệu trong main
    scanf("%d %d", &a, &b);
    
    // 3. Truyền địa chỉ của a và b vào hàm swap
    swap(&a, &b);
    
    // 4. In kết quả theo đúng định dạng mẫu của đề bài
    printf("Sau khi hoan doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}