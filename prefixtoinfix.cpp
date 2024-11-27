#include <bits/stdc++.h>
using namespace std;
bool isoperator(char a){
    if(a=='*' or a=='/' or a=='+' or a=='-'){
        return true;
    }
    return false;
}
string pti(string str){
    stack<string> st;
    for(int i=str.length()-1;i>=0;i--){
        char op=str[i];
        if(isoperator(op)){
            string obj1=st.top();
            // cout<<obj1<<endl;
            st.pop();
            string obj2=st.top();
            // cout<<obj2<<endl;
            st.pop();
            string obj3=obj1+op+obj2;
            // cout<<obj3<<endl;
            st.push(obj3);
        }
        else{
            st.push(string(1,op));
        }
    }
    string result=st.top();
    return result;
}
int main(){
    string str="+*AB/CD";
    cout<<"Prefix: "<<str<<endl;
    str=pti(str);
    cout<<"infix: "<<str;
}
