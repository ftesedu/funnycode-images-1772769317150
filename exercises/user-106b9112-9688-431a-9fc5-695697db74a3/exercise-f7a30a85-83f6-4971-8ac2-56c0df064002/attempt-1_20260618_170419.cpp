#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int>& arr) {
    stack<int>  s;
    vector<int> res;
    int         n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        if (s.empty()) {
            s.push(arr[i]);
            res.push_back(-1);
        } else {
            while (!s.empty()) {
                if (arr[i] < s.top()) {
                    res.push_back(s.top());
                    s.push(arr[i]);
                    break;
                } else {
                    s.pop();
                }
            }
            if (s.empty()) {
                res.push_back(-1);
                s.push(arr[i]);
            }
        }
    }
    reverse(res.begin(), res.end());
    return res;
}