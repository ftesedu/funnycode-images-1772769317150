#include <iostream>
#include <string>
#include <stdexcept> // Thư viện để ném lỗi std::out_of_range

using namespace std;

class IntSLinkedList {
public:
    class Node; // Forward declaration

private:
    Node* head;
    Node* tail;
    int count;

public:
    IntSLinkedList() : head(NULL), tail(NULL), count(0) {};
    
    // =========================================================================
    // CÁC PHƯƠNG THỨC SINH VIÊN CẦN HIỆN THỰC
    // =========================================================================

    // 1. Luôn thêm phần tử element vào cuối danh sách liên kết.
    void add(int element) {
        // TODO: Student code here
        Node* newNode = new Node(element);
        if (this->count == 0){
        	this->tail = this->head = newNode;
		}else{
			this->tail->next = newNode;
			this->tail = newNode;
		}
		this->count++;
        
    }

    // 2. Thêm phần tử element vào danh sách liên kết tại vị trí index.
    // Kiểm tra tính hợp lệ, nếu index lỗi ném lỗi std::out_of_range
    void add(int index, int element) {
        // TODO: Student code here
        if (index < 0 || index > this->count){
        	throw std::out_of_range("Index tieng viet: Vi tri vuot qua pham vi cua danh sach!");
			return;
		}else{
			Node* newNode = new Node(element);
			if(index == 0){
		        if (this->head == nullptr){
		        	this->tail = this->head = newNode;
				}else{
					newNode->next = this->head;
					this->head = newNode;
				}
			}else if(index == this->count){
				this->add(element);
			}else{
				Node* temp = this->head;
				for(int i = 0; i < index - 1; i++){
					temp = temp->next;
					}					
				newNode->next = temp->next;
				temp->next = newNode;
				}
			this->count++;
    		}
    	}
    

    // 3. Kiểm tra xem danh sách hiện tại có rỗng hay không?
    bool empty() {
        if (this->count == 0){
        	return true;
		}else{
			return false;
		}
         // Thay đổi giá trị trả về cho đúng
    }

    // 4. Trả về số lượng phần tử của danh sách hiện tại.
    int size() {
        return this->count; // Thay đổi giá trị trả về cho đúng
    }

    // =========================================================================
    // CÁC PHƯƠNG THỨC KHÁC (GIỮ NGUYÊN)
    // =========================================================================
    int removeAt(int index) {
        return 0;
    }

    bool removeItem(int item) {
        return false;
    }
     
    int get(int index) {
        return -1;
    }

    void set(int index, int element) {

    }

    int indexOf(int item) {
        return -1;
    }

    bool contains(int item) {
        return false;
    }
     
    void clear() {

    }
     
    // Hàm toString() dùng để hiển thị danh sách phục vụ chấm bài
    string toString() {
        string res = "[";
        Node* curr = head;
        while (curr != NULL) {
            res += to_string(curr->data);
            if (curr->next != NULL) res += ", ";
            curr = curr->next;
        }
        res += "]";
        return res;
    }

public:
    class Node {
    public:
        int data;
        Node* next;

    public:
        Node() : next(NULL) {};
        Node(int data) : data(data), next(NULL) {};
    };
};

// =========================================================================
// CHƯƠNG TRÌNH CHẠY THỬ (TEST CODES)
// =========================================================================
int main() {
    // ---- TEST 1: Thêm vào cuối danh sách ----
    cout << "--- TEST 1 ---" << endl;
    IntSLinkedList list1;
    int size1 = 10;
    for(int index = 0; index < size1; index++){
        list1.add(index);
    }
    cout << "Ket qua: " << list1.toString() << endl; // Mong đợi: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

    // ---- TEST 2: Thêm theo index ----
    cout << "\n--- TEST 2 ---" << endl;
    IntSLinkedList list2;
    int size2 = 10;
    for (int index = 0; index < size2; index++) {
        list2.add(list2.size(), index);
    }
    cout << "Ket qua: " << list2.toString() << endl; // Mong đợi: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

    // ---- TEST 3: Kiem tra ngoai le (Exception) ----
    cout << "\n--- TEST 3 (Kiem tra out_of_range) ---" << endl;
    try {
        list2.add(-1, 99); // Vị trí âm hợp lệ không? -> Ném lỗi
    } catch (const out_of_range& e) {
        cout << "Bat duoc loi dung: " << e.what() << endl;
    }

    try {
        list2.add(20, 99); // Vị trí vượt quá size hiện tại -> Ném lỗi
    } catch (const out_of_range& e) {
        cout << "Bat duoc loi dung: " << e.what() << endl;
    }

    return 0;
}