#include <iostream>

using namespace std;

class LLNode {
  public:
    int     val;
    LLNode* next;
    LLNode(){
        this->val = 0;
        this->next = NULL;
    }
    LLNode(int val, LLNode* next){
        this->val = val;
        this->next = next;
    }
};

LLNode* addLinkedList(LLNode* l0, LLNode* l1){
    int du = 0;
    if(l0 == nullptr && l1 == nullptr) return nullptr;
    LLNode *res = nullptr;
    LLNode *current = nullptr;
    int sum = 0;
    while(l0 != nullptr || l1 != nullptr){
        sum = du;
        if(l0 != nullptr){
            sum += l0->val;
            l0 = l0->next;
        }
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        du = sum / 10;
        sum %= 10;
        LLNode *newNode = new LLNode(sum, nullptr);
        if(res == nullptr){
            res = current = newNode;
        } else {
            current->next = newNode;
            current = current->next;
        }
    }
    if (du > 0){
        current->next = new LLNode(du, nullptr);
    }
    return res;
}