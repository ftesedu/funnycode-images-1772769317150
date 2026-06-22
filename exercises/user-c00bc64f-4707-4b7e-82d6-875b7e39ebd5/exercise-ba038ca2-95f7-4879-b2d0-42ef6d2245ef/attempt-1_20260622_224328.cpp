#include <iostream>
#include <stack>

using namespace std;

int baseballScore(string ops){
    stack<int> s;
    for(char i : ops){
        if(i >= '0' && i <= '9'){
            s.push(i - '0');
        } else if(i == 'C'){
            s.pop();
        } else if(i == 'D'){
            int temp = s.top();
            temp = temp * 2;
            s.push(temp);
        } else if(i == '+'){ // Nên dùng điều kiện rõ ràng thay vì else
            int temp1 = s.top();
            s.pop();
            int temp2 = s.top();
            s.push(temp1);          // Trả lại temp1 vào stack
            s.push(temp1 + temp2);  // Thêm tổng của 2 số vào stack
        }
    }
    
    int res = 0;
    while(!s.empty()){
        res = res + s.top();
        s.pop(); // Phải có pop() để stack rỗng dần
    }
    return res;
}

int main(){
    cout << baseballScore("52CD+"); // Output kỳ vọng: 30
    return 0;
}