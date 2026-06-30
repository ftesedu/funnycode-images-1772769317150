#include <iostream>
using namespace std;

// ==========================================================
// 1. LỚP SLINKEDLIST ĐÃ ĐƯỢC CÀI ĐẶT ĐẦY ĐỦ 
// (Giúp bạn chạy test ở máy nhà không bị lỗi Incomplete Type)
// ==========================================================
template <class T>
class SLinkedList {
public:
    class Node {
    public:
        T data;
        Node* next;
        Node(T data, Node* next = nullptr) : data(data), next(next) {}
    };

    class Iterator {
    private:
        Node* current;
    public:
        Iterator(Node* node = nullptr) : current(node) {}
        T& operator*() { return current->data; }
        Iterator operator++(int) { 
            Iterator temp = *this; 
            if (current != nullptr) current = current->next; 
            return temp; 
        }
        bool operator!=(const Iterator& other) const { return current != other.current; }
    };

protected:
    Node* head;
    Node* tail;
    int count;

public:
    SLinkedList() : head(nullptr), tail(nullptr), count(0) {}
    
    ~SLinkedList() { clear(); }

    void add(int index, const T& e) {
        if (index < 0 || index > count) return;
        if (index == 0) {
            head = new Node(e, head);
            if (count == 0) tail = head;
        } else {
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) temp = temp->next;
            temp->next = new Node(e, temp->next);
            if (index == count) tail = temp->next;
        }
        count++;
    }

    int size() { return count; }

    T get(int index) {
        Node* temp = head;
        for (int i = 0; i < index; i++) temp = temp->next;
        return temp->data;
    }

    void set(int index, const T& e) {
        Node* temp = head;
        for (int i = 0; i < index; i++) temp = temp->next;
        temp->data = e;
    }

    void removeAt(int index) {
        if (index < 0 || index >= count) return;
        Node* delNode;
        if (index == 0) {
            delNode = head;
            head = head->next;
            if (count == 1) tail = nullptr;
        } else {
            Node* temp = head;
            for (int i = 0; i < index - 1; i++) temp = temp->next;
            delNode = temp->next;
            temp->next = delNode->next;
            if (index == count - 1) tail = temp;
        }
        delete delNode;
        count--;
    }

    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = tail = nullptr;
        count = 0;
    }

    Iterator begin() { return Iterator(head); }
    Iterator end() { return Iterator(nullptr); }
};

// ==========================================================
// 2. KHUNG ĐỀ BÀI CUNG CẤP
// ==========================================================

class Polynomial;

class Term {
private:
    double coeff;   
    int exp;
    friend class Polynomial;
public:
    Term(double coeff = 0.0, int exp = 0) {
        this->coeff = coeff;
        this->exp = exp;
    }
    bool operator==(const Term& rhs) const {
        return this->coeff == rhs.coeff && this->exp == rhs.exp;
    }
    friend ostream & operator<<(ostream &os, const Term& term) {
        cout << endl;
        cout << "Term: " << "(" << term.coeff << " " << term.exp << ")";
        return os;
    }
};

class Polynomial {
private:
    SLinkedList<Term>* terms;
public:
    Polynomial() {
        this->terms = new SLinkedList<Term>();
    }
    ~Polynomial() {
        this->terms->clear();
    }
    
    // Khai báo 2 hàm bạn cần hoàn thiện
    void insertTerm(const Term& term);
    void insertTerm(double coeff, int exp);
    
    void print() {
        SLinkedList<Term>::Iterator it;
        cout << "[";
        for (it = this->terms->begin(); it != this->terms->end(); it++) {
            cout << (*it);
        }
        cout << endl << "]\n";
    }
};

// ==========================================================
// 3. VÙNG TRỐNG DÀNH CHO BẠN (VIẾT CODE VÀO ĐÂY)
// ==========================================================

void Polynomial::insertTerm(const Term& term) {
    /* 
      TODO: Sinh viên viết code tại đây.
      
      Gợi ý quy trình:
      1. Nếu hệ số (term.coeff) == 0 thì return luôn, không làm gì cả.
      2. Dùng vòng lặp for (int i = 0; i < this->terms->size(); i++)
      3. Lấy Term hiện tại: Term currentTerm = this->terms->get(i);
      4. So sánh số mũ (term.exp với currentTerm.exp):
         - Nếu bằng nhau: Tính tổng hệ số. Nếu tổng = 0 thì xoá (removeAt). Nếu != 0 thì ghi đè (set). Rồi return.
         - Nếu term.exp lớn hơn: Chen ngang vào vị trí i (add). Rồi return.
      5. Nếu chạy hết vòng lặp mà chưa return (tức là số mũ nhỏ nhất): Thêm vào cuối danh sách (add).
    */
    
    if(term.coeff == 0){
    	return;
	}
	
	for (int i = 0; i < this->terms->size(); i++ ){
		Term currentTerm = this->terms->get(i);
		if (currentTerm.exp == term.exp){
			if (currentTerm.coeff + term.coeff != 0){
				this->terms->set(i, Term(currentTerm.coeff + term.coeff, term.exp));
				return;
			}else{
				this->terms->removeAt(i);
				return;
			}
		}else if(currentTerm.exp <= term.exp){
			this->terms->add(i, term);
			return;
		}
	}
	this->terms->add(this->terms->size(),term);
    
}

void Polynomial::insertTerm(double coeff, int exp) {
    /* 
      TODO: Sinh viên viết code tại đây.
      
      Gợi ý: 
      Tạo đối tượng Term từ coeff và exp, sau đó gọi lại hàm insertTerm(term) ở ngay phía trên.
    */
    Polynomial::insertTerm(Term(coeff, exp));
    
}

// ==========================================================
// 4. HÀM MAIN TEST TỰ ĐỘNG
// ==========================================================

int main() {
    cout << "--- Test 1 ---" << endl;
    Polynomial *poly = new Polynomial();
    poly->insertTerm(6.0, 2);
    poly->insertTerm(4.0, 5);
    poly->insertTerm(4.0, 3);
    poly->insertTerm(6.0, 5);
    poly->insertTerm(-1.0, 0);
    poly->insertTerm(-6.0, 6);
    poly->insertTerm(6.0, 6);
    poly->print();
    delete poly; 

    cout << "\n--- Test 2 ---" << endl;
    int n = 5;
    int coeff[] = { 1, 2, 3, 4, 5 };
    int exp[] = { 1, 2, 3, 4, 5 };

    Polynomial p1;
    for (int i = 0; i < n; ++i) {
        p1.insertTerm(coeff[i], exp[i]);
    }
    p1.print();
    
    return 0;
}