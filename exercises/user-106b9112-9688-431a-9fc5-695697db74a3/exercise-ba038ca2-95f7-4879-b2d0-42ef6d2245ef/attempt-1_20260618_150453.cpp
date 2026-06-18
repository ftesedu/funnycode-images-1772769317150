#include <iostream>
#include <stack>

using namespace std;

int baseballScore(string ops) {
    /*TODO*/
    stack<int> s;
    for (char i : ops) {
        if (i >= '0' && i <= '9') {
            s.push(i - '0');
        } else if (i == 'C') {
            s.pop();
        } else if (i == 'D') {
            int temp = s.top();
            temp *= 2;
            s.push(temp);
        } else {
            int temp1 = s.top();
            s.pop();
            int temp2 = s.top();
            s.push(temp1);
            s.push(temp1 + temp2);
        }
    }
    int res = 0;
    while (!s.empty()) {
        res += s.top();
        s.pop();
    }
    return res;
}