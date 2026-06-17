#include <iostream>

using namespace std;

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
    void insertTerm(const Term& term);
    void insertTerm(double coeff, int exp);
    void print() {
        SLinkedList<Term>::Iterator it;
        cout << "[";
        for (it = this->terms->begin(); it != this->terms->end(); it++) {
            cout << (*it);
        }
        cout << endl << "]";
    }
};


//SLinkedList has been done with the following attributes and methods:

class SLinkedList : IList<T>
{
public:
    class Iterator; //forward declaration
    class Node;     //forward declaration

protected:
    Node* head;
    Node* tail;
    int count;

public:
    SLinkedList() : head(NULL), tail(NULL), count(0) {};
    virtual ~SLinkedList();
    virtual void add(const T& e);
    virtual void add(int index, const T& e);
    virtual T removeAt(int index);
    virtual bool removeItem(const T& removeItem);
    virtual bool empty();
    virtual int size();
    virtual void clear();
    virtual T get(int index);
    virtual void set(int index, const T& e);
    virtual int indexOf(const T& item);
    virtual bool contains(const T& item);
};

void Polynomial::insertTerm(const Term& term) {
    if (term.coeff == 0) {
        return;
    }
    if(this->terms->empty()) {
        this->terms->add(term);
        return;
    }else {
        if (*(this->terms->begin()).exp < term.exp){
            this->terms->add(0, term);
            return;
        }

        int index = 0;
        for (SLinkedList<Term>::Iterator it = this->terms->begin(); it != this->terms->end(); it++) {
            if((*it).exp == term.exp) {
                Term newTerm((*it).coeff + term.coeff, term.exp);
                if (newTerm.coeff == 0) {
                    this->terms->removeAt(index);
                } else {
                    this->terms->set(index, newTerm);
                }
                return;
            }
            if ((*it).exp < term.exp) {
                this->terms->add(index, term);
                return;
            }
            index++;
        }
        this->terms->add(term);
    }
}

void Polynomial::insertTerm(double coeff, int exp) {
    // Term term(coeff, exp);
    this->insertTerm(Term(coeff, exp));
}
