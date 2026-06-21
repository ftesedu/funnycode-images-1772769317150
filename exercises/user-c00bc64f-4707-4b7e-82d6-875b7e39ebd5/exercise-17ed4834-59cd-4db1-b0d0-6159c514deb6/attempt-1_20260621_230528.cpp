#include<iostream>
#include<string>
#include<sstream>

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
    DLinkedList();
    ~DLinkedList();
    void    add(const T &e);
    void    add(int index, const T &e);
    int     size();
public:
    class Node
    {
    private:
        T data;
        Node *next;
        Node *previous;
        friend class DLinkedList<T>;

    public:
        Node()
        {
            this->previous = NULL;
            this->next = NULL;
        }

        Node(const T &data)
        {
            this->data = data;
            this->previous = NULL;
            this->next = NULL;
        }
    };

};
template <class T>
void DLinkedList<T>::add(const T& e) {
  /* Insert an element into the end of the list. */
   if(this->count ==0){
    this->head = this->tail = new Node(e);
   }else{
    Node* newNode= new Node(e);
    this->tail->next= newNode;
    newNode->previous = this->tail;
    this->tail=newNode;
   }
   this->count++;
}

template<class T>
void DLinkedList<T>::add(int index, const T& e) {
  /* Insert an element into the list at given index. */ 
  if(index<0||index>this->count){
    throw out_of_range("out of range");
  }
   if(this->count == index){
    this->add(e);
   }else if( index == 0){
    Node* newNode = new Node(e);
    newNode->next = this->head;
    this->head->previous = newNode;
    this->head = newNode;
    this->count++;
   }else{
    Node* temp = this->head;
    for( int i = 0; i< index-1;i++){
        temp = temp->next;
    }
    Node* newNode = new Node(e);
    newNode->next = temp->next;
    temp->next->previous = newNode;
    temp->next= newNode;
    newNode->previous = temp;
    this->count++;
   }
}

template<class T>
int DLinkedList<T>::size() {
  /* Return the length (size) of list */ 
  return this->count;
}
