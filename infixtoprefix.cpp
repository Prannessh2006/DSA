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
string itp(string str){
    stack<char> st;
    reverse(str.begin(),str.end());
    string temp="";
    for(int i=0;i<str.length();i++){
        if(isoperator(str[i])){
            if(!st.empty() && higherprecedence(st.top(),str[i])){
                while(!st.empty()){
                    temp+=st.top();
                    st.pop();
                }
            }
            st.push(str[i]);
            }
        else{
            temp+=str[i];
        }
    }
    while(!st.empty()){
        temp+=st.top();
        st.pop();
    }
    reverse(temp.begin(),temp.end());
    return temp;
}
int main(){
    string str="A*B+C/D";
    cout<<"Infix: "<<str<<endl;
    str=itp(str);
    cout<<"prefix: "<<str;
}
