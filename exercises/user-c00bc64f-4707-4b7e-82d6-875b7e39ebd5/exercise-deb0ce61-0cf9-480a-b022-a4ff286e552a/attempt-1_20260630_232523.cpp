#include<iostream>
#include<queue>

using namespace std;

void interleaveQueue(queue<int>& q){
   queue<int> temp;
   queue<int> res;
   int n= q.size();
   n /=2;
   while(n--){
    temp.push(q.front());
    q.pop();
   }
   n= q.size();
   while(n--){
    res.push(temp.front());
    res.push(q.front());
    temp.pop();
    q.pop();
   }
   q = res;
}
int main(){
queue<int> q;
int n; cin >> n;
for (int i = 0; i < n; i++){
    int element; cin >> element;
    q.push(element);
}
interleaveQueue(q);
while (!q.empty()){
    cout << q.front() << ' ';
    q.pop();
}
}