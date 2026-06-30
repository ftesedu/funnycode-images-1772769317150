#include <iostream>

using namespace std;

class LLNode {
public:
    int val;
    LLNode* next;
    
    // Constructor mặc định
    LLNode() {
        this->val = 0;
        this->next = nullptr;
    }
    
    // Constructor có tham số
    LLNode(int val, LLNode* next) {
        this->val = val;
        this->next = next;
    }

    /* ==========================================================
       1. HÀM TẠO DANH SÁCH TỪ MẢNG (GIỐNG TEST GIÁO VIÊN)
       Dùng 2 con trỏ begin và end để duyệt mảng truyền vào
    ========================================================== */
    static LLNode* createWithIterators(int* begin, int* end) {
        LLNode* head = nullptr;
        LLNode* tail = nullptr;

        // Vòng lặp duyệt từ đầu mảng đến cuối mảng
        for (int* it = begin; it != end; ++it) {
            // Lấy giá trị tại con trỏ hiện tại (*it) tạo thành Node mới
            LLNode* newNode = new LLNode(*it, nullptr);
            
            // Logic này y hệt hàm addLast() trong lesson1.cpp của bạn!
            if (head == nullptr) {
                head = tail = newNode; // Nếu danh sách rỗng, node mới vừa là đầu vừa là đuôi
            } else {
                tail->next = newNode;  // Nối node mới vào đuôi
                tail = newNode;        // Cập nhật lại đuôi mới
            }
        }
        return head; // Trả về con trỏ đầu danh sách
    }

    /* ==========================================================
       2. HÀM IN DANH SÁCH
       Hệ thống gọi LLNode::printList(newhead);
    ========================================================== */
    static void printList(LLNode* head) {
        LLNode* current = head;
        cout << "[";
        while (current != nullptr) {
            cout << current->val;
            if (current->next != nullptr) cout << ", ";
            current = current->next;
        }
        cout << "]" << endl;
    }

    /* ==========================================================
       3. HÀM XÓA DANH SÁCH (TRÁNH TRÀN BỘ NHỚ)
       Hệ thống gọi head1->clear();
    ========================================================== */
    void clear() {
        LLNode* current = this; // Bắt đầu từ node hiện tại
        while (current != nullptr) {
            LLNode* temp = current;
            current = current->next;
            delete temp; // Xóa từng node một giống hệt hàm Destructor ở lesson1.cpp
        }
    }

};
LLNode* addLinkedList(LLNode* l0, LLNode* l1){
	LLNode* dummy = new LLNode(0, nullptr);
	LLNode* curr = dummy;
	
	int carry = 0;
	
	while (l0 != nullptr || l1 != nullptr || carry != 0){
		int sum = carry;
		if(l0 != nullptr){
			sum += l0->val;
			l0 = l0->next;
		}
		if(l1 != nullptr){
			sum += l1->val;
			l1 = l1->next;
		}
		int digit = sum % 10;
		carry = sum / 10;
		
		curr->next = new LLNode(digit, nullptr);
		curr = curr->next;
	}
	LLNode* result = dummy->next;
    delete dummy; // Tránh rò rỉ bộ nhớ
    
    return result;
}
/* 
  BÂY GIỜ BẠN CHỈ CẦN VIẾT THÊM HÀM 
  LLNode* addLinkedList(LLNode* l0, LLNode* l1) 
  LÀ CÓ THỂ CHẠY TOÀN BỘ CHƯƠNG TRÌNH TEST!
*/


int main(){
	int arr1[] = {4, 3, 2};
	int arr2[] = {5, 4 ,1};
	LLNode* head1 = LLNode::createWithIterators(arr1, arr1 + sizeof(arr1) / sizeof(int));
	LLNode* head2 = LLNode::createWithIterators(arr2, arr2 + sizeof(arr2) / sizeof(int));
	LLNode* newhead = addLinkedList(head1, head2);
	LLNode::printList(newhead);
	head1->clear();
	head2->clear();
	newhead->clear();
	return 0;
}