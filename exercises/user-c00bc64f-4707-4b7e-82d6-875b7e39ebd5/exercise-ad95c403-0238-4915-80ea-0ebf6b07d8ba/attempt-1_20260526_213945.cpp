#include<iostream>
using namespace std;
class LLNode{
    public:
    int val;
    LLNode* next;
   // Constructor mặc định
    LLNode() : val(0), next(nullptr) {} 
    
    // Constructor 1 tham số
    LLNode(int val) : val(val), next(nullptr) {}
    
    // Constructor 2 tham số (Cần thiết cho nút dummy)
    LLNode(int val, LLNode* next) : val(val), next(next) {}
    // 1. Hàm tạo list từ mảng (Iterator)
    static LLNode* createWithIterators(int* begin, int* end) {
        if (begin >= end) return nullptr;
        LLNode* head = new LLNode(*begin);
        LLNode* curr = head;
        for (int* it = begin + 1; it < end; ++it) {
            curr->next = new LLNode(*it);
            curr = curr->next;
        }
        return head;
    }

    // 2. Hàm in danh sách
    static void printList(LLNode* head) {
        LLNode* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
    // Hàm clear là phương thức thành viên của class
    void clear() {
        LLNode* current = this;
        while (current != nullptr) {
            LLNode* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
    
    static LLNode* addLinkedList(LLNode* l0, LLNode* l1){
    LLNode* dummy = new LLNode(0, nullptr);
    LLNode* tail = dummy;
    int carry = 0;
    while(l0!=nullptr || l1!=nullptr || carry!=0){
        int sum = carry;
        if(l0!=nullptr){
            sum+=l0->val;
            l0 = l0->next;
        }
        if(l1!=nullptr){
            sum+=l1->val;
            l1 = l1->next;
        }
        carry = sum/10;
        tail->next = new LLNode(sum%10);
        tail = tail->next;
    }
    LLNode* res = dummy->next;
    delete dummy;
    return res;
  }
 
};
 int main() {
    // Chương trình TEST theo đúng yêu cầu đề bài
    int arr1[] = {2, 9};
    int arr2[] = {0, 5};
    
    LLNode* head1 = LLNode::createWithIterators(arr1, arr1 + sizeof(arr1) / sizeof(int));
    LLNode* head2 = LLNode::createWithIterators(arr2, arr2 + sizeof(arr2) / sizeof(int));
    
    LLNode* newhead = LLNode::addLinkedList(head1, head2);
    
    LLNode::printList(newhead);
    
    head1->clear();
    head2->clear();
    newhead->clear();
    
    return 0;
}