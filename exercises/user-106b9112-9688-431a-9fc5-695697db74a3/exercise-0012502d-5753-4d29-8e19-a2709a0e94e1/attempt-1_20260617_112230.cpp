#include <bits/stdc++.h>

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
}

void Polynomial::insertTerm(const Term& term) {
    if(term.coeff == 0) return;
    if (this->terms->empty()) {
        this->terms->add(term);
    }else {
        SLinkedList<Term>::Iterator it;
        if(*(this->terms->begin()).exp < term.exp){
            this->terms->add(0, term);
            return;
        }
        int counter = 0;
        for (it = this->terms->begin(); it != this->terms->end(); it++) {
            if(*(it).exp < term.exp){
                this->terms ->add(counter, term);
                return;
            }
            if (*(it).exp == term.exp){
                Term newTerm = Term(term.coeff + *(it).coeff, term.exp);
                if (term.coeff + *(it).coeff == 0){
                    this->terms->removeAt(counter);
                } else {
                    this->terms->set(counter, newTerm);
                }
            }
            counter++;
        }
        this->terms->add(term);
    }
}

void Polynomial::insertTerm(double coeff, int exp) {
    Term term = Term(coeff, exp);
    if(term.coeff == 0) return;
    if(this->terms->empty()) {
        this->terms->add(term);
    } else {
        SLinkedList<Term>::Iterator it;
        if (*(this->terms->begin()).exp < term.exp) {
            this->terms->add(0, term);
            return;
        }
        int counter = 0;
        for (it = this->terms->begin(); it != this->terms->end(); it++) {
            if (*(it).exp < term.exp) {
                this->terms->add(counter, term);
                return;
            }
            if (*(it).exp == term.exp) {
                Term newTerm = Term(term.coeff + *(it).coeff, term.exp);
                if (term.coeff + *(it).coeff == 0) {
                    this->terms->removeAt(counter);
                } else {
                    this->terms->set(counter, newTerm);
                }
                return;
            }
            counter++;
        }
        this->terms->add(term);
    }
}