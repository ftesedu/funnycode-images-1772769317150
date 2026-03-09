#include<iostream>
using namespace std;
class LLNode{
	public:
		int val;
		LLNode* next;
		LLNode()
		{
			this->val = 0;
			this->next = nullptr; 
		}
		LLNode(int val, LLNode* next){
			this->val = val;
			this->next = nullptr;
		}
};

LLNode* addLinkedList(LLNode* l0, LLNode* l1){
	LLNode* temp = new LLNode(0, nullptr);
	LLNode* cur = temp;
	int carry = 0;
	int v1 = 0;
	int v2 = 0;
	
	while(l0 != nullptr || l1 != nullptr || carry !=0){
		
		if(l0 != nullptr){
			v1 = l0->val;
		}
		else v1 = 0;
		
		if(l1 != nullptr){
			v2 = l1->val;
		}
		else v2 = 0;
		
		int sum = v1 + v2 + carry;
		carry = sum/10;
		int digit = sum % 10;
		
		cur->next = new LLNode(digit, nullptr);
		cur = cur->next;
		
		if(l0 != nullptr) l0 = l0->next;
		if(l1 != nullptr) l1 = l1->next;
	}
	
	LLNode* result = temp->next;
	delete temp;
	return result;
}