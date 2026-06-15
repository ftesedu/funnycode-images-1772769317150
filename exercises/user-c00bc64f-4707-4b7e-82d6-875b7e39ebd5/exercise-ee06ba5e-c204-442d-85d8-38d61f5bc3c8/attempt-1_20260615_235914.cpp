#include <iostream>
#include <sstream>
using namespace std;

template <class T>
class SLinkedList {
public:
    class Node; // Forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    SLinkedList()
    {
      this->head = nullptr;
      this->tail = nullptr;
      this->count = 0;
    }
    ~SLinkedList(){};
    void add(T e)
    {
        Node *pNew = new Node(e);

        if (this->count == 0)
        {
            this->head = this->tail = pNew;
        }
        else
        {
            this->tail->next = pNew;
            this->tail = pNew;
        }

        this->count++;
    }
    int size()
    {
        return this->count;
    }
    void printList()
    {
        stringstream ss;
        ss << "[";
        Node *ptr = head;
        while (ptr != tail)
        {
            ss << ptr->data << ",";
            ptr = ptr->next;
        }

        if (count > 0)
            ss << ptr->data << "]";
        else
            ss << "]";
        cout << ss.str() << endl;
    }
public:
    class Node {
    private:
        T data;
        Node* next;
        friend class SLinkedList<T>;
    public:
        Node() {
            next = 0;
        }
        Node(T data) {
            this->data = data;
            this->next = nullptr;
        }
    };

    void bubbleSort();
};



template <class T>
void SLinkedList<T>::bubbleSort()
{
    if (this->count <= 1) return;

    bool swapped;
    Node* lptr = nullptr;

    do {
        swapped = false;
        Node* current = this->head;

        while (current->next != lptr) {
            
            // Nếu sai thứ tự thì tiến hành hoán đổi giá trị (data)
            if (current->data > current->next->data) {
                T temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true; // Đánh dấu là có sự hoán đổi
            }
            current = current->next;
        }
        
        // Cập nhật lại lptr, phần tử current hiện tại là phần tử lớn nhất vừa được đẩy xuống
        lptr = current;
        
        // Nếu không có bất kỳ sự hoán đổi nào, danh sách đã sắp xếp xong, ta thoát vòng lặp
        if (!swapped) {
            break;
        }
        
        // In ra danh sách sau mỗi lượt "bubble"
        this->printList();
        
    } while (swapped);
}
int main() {
    int arr[] = {9, 2, 8, 4, 1};
    SLinkedList<int> list;
    
    // Thêm các phần tử từ mảng vào danh sách
    for(int i = 0; i < int(sizeof(arr) / sizeof(arr[0])); i++) {
        list.add(arr[i]);
    }
    
    cout << "Danh sach truoc khi sap xep: ";
    list.printList();
    cout << "-------------------------------" << endl;
    
    cout << "Qua trinh Bubble Sort:" << endl;
    // Gọi hàm sắp xếp và in ra từng bước
    list.bubbleSort();
    
    return 0;
}