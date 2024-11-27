#include <bits/stdc++.h>
using namespace std;
bool isoperator(char a){
    if(a=='*' or a=='/' or a=='+' or a=='-'){
        return true;
    }
    return false;
}
bool higherprecedence(char a,char b){
    if((a=='*' or a=='/') and (b=='+' or b=='-')){
        return true;
    }
    else{
        return false;
    }
}
string pti(string str){
    stack<string> st;
    for(int i=0;i<str.length();i++){
        char op=str[i];
        if(isoperator(op)){
            string obj1=st.top();
            // cout<<obj1<<endl;
            st.pop();
            string obj2=st.top();
            // cout<<obj2<<endl;
            st.pop();
            string obj3="("+obj2+op+obj1+")";
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
    string str="AB*C+";
    cout<<"Postfix: "<<str<<endl;
    str=pti(str);
    cout<<"infix: "<<str;
}
