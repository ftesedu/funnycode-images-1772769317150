#include <iostream>
#include <string>

using namespace std;

class IntSLinkedList {
  public:
    class Node; // Forward declaration

  private:
    Node* head;
    Node* tail;
    int   count;

  public:
    IntSLinkedList() : head(NULL), tail(NULL), count(0) {};
    void add(int element) {
        if(this->count == 0){
            this->head = this->tail = new Node(element);
        }else {
            Node* newNode = new Node(element);
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->count++;
    }

    void add(int index, int element) {
        if(index < 0 || index > this->count){
            throw out_of_range("out of range");
        }else if (index == 0){
            Node* newNode = new Node(element);
            newNode->next = this->head;
            this->head = newNode;
            this->count++;
        }else if (index == this->count){
            this->add(element);
        }else{
            Node* newNode = new Node(element);
            Node* temp = this->head;
            for (int i = 0; i < index -1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            this->count++;
        }
    }

    int removeAt(int index) {

        return 0;
    }

    bool removeItem(int item) {

        return false;
    }

    bool empty() {
        return this->count == 0;
    }

    int size() {
        return this->count;
    }

    int get(int index) {
        return -1;
    }

    void set(int index, int element) {}

    int indexOf(int item) {
        return -1;
    }

    bool contains(int item) {
        return false;
    }

    void clear() {}

    string toString();

  public:
    class Node {
      public:
        int   data;
        Node* next;

      public:
        Node() : next(NULL) {};
        Node(int data) : data(data), next(NULL) {};
    };
};
