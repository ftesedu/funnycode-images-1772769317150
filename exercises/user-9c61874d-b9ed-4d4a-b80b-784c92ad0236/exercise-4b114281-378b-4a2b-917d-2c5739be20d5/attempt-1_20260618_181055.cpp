#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string expr) {
    /*TODO*/
    vector<string> vt;
    stringstream ss(expr);
    string token;
    while (ss >> token){
        vt.push_back(token);
    }
    stack<int> s;
    for(string i : vt){
        if(i == "+"){
            int temp1 = s.top(); s.pop();
            int temp2 = s.top(); s.pop();
            s.push(temp1 + temp2);
        }else if(i == "-"){
            int temp1 = s.top(); s.pop();
            int temp2 = s.top(); s.pop();
            s.push(temp2 - temp1);
        }else if(i == "*"){
            int temp1 = s.top(); s.pop();
            int temp2 = s.top(); s.pop();
            s.push(temp1 * temp2);
        }else if(i == "/"){
            int temp1 = s.top(); s.pop();
            int temp2 = s.top(); s.pop();
            s.push(temp2 / temp1);
        }else {
            if(i.size() == 1){
                s.push(i[0] - '0');
            }else{
                s.push(stoi(i));
            }
        }
    }
    return s.top();
}