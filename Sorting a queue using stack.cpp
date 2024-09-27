#include <iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> old;
    stack<int> newn;
    int n,value;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> value;
        old.push(value);
    }
    while(!old.empty()){
        int temp = old.front();
        old.pop();
        while(!newn.empty() && temp>=newn.top()){
        old.push(newn.top());
        newn.pop();
        }
        newn.push(temp);
    }
    while(!newn.empty()){
        cout << newn.top() <<" ";
        newn.pop();
    }
}
