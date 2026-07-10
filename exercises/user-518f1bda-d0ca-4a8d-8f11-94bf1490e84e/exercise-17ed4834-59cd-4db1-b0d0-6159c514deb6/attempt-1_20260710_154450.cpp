#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T>
class DLinkedList {
public:
    class Node; // Forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    DLinkedList() {
        head = NULL;
        tail = NULL;
        count = 0;
    }
    
    ~DLinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
    
    void    add(const T &e);
    void    add(int index, const T &e);
    int     size();
    
    // Hàm hỗ trợ xuất chuỗi để chạy Test
    string toString() {
        stringstream ss;
        ss << "[";
        Node* current = head;
        while (current != NULL) {
            ss << current->data;
            if (current->next != NULL) ss << ", ";
            current = current->next;
        }
        ss << "]";
        return ss.str();
    }

public:
    class Node {
    private:
        T data;
        Node *next;
        Node *prev;
        friend class DLinkedList<T>;

    public:
        Node() {
            this->prev = NULL;
            this->next = NULL;
        }

        Node(const T &data) {
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
    };
};

// ==========================================
// THỰC HIỆN CÁC PHƯƠNG THỨC DƯỚI ĐÂY
// ==========================================

template <class T>
void DLinkedList<T>::add(const T& e) {
    /* Insert an element into the end of the list. */
    Node* newNode = new Node(e);
    if(this->size() == 0){
    	this->head = this->tail = newNode;
	}else{
		this->tail->next = newNode;
    	newNode->prev = this->tail;
    	this->tail = newNode;
	}
	this->count++;
	return;


    // Viết code của bạn ở đây
    
}

template<class T>
void DLinkedList<T>::add(int index, const T& e) {
    /* Insert an element into the list at given index. */ 
    if(index < 0 || index > this->size()){
    	cout << "Index Invalid!" << endl;
    	return;
	}else if(index == this->size()){
		this->add(e);
		this->count++;
		return;
	}else if (index == 0){
		Node* newNode = new Node(e);
		this->head->prev = newNode;
		newNode->next = this->head;
		this->head = newNode;
		this->count++;
		return;
	}else{
		Node* newNode = new Node(e);
		Node* temp = this->head;
		for(int i = 0; i < index ; i++){
			temp = temp->next;
		}
		newNode->next = temp;
		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
		}
		count++;
	}
		
	
    // Viết code của bạn ở đây
    


template<class T>
int DLinkedList<T>::size() {
    /* Return the length (size) of list */ 
    
    // Viết code của bạn ở đây
    return this->count;
}

// ==========================================
// KHU VỰC KHỞI CHẠY TEST
// ==========================================
int main() {
    cout << "--- Test 1 ---" << endl;
    DLinkedList<int> list1;
    int size1 = 10;
    for(int idx = 0; idx < size1; idx++){
       list1.add(idx);
    }
    cout << list1.toString() << endl;

    cout << "\n--- Test 2 ---" << endl;
    DLinkedList<int> list2;
    int size2 = 10;
    for(int idx = 0; idx < size2; idx++){
       list2.add(0, idx);
    }
    cout << list2.toString() << endl;

    return 0;
}