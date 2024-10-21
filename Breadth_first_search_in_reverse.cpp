// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Node{
  int data;
  Node* left=nullptr;
  Node* right=nullptr;
  Node(int val){
      data=val;
  }
};
void printlevelorder(Node* root,int heigh){
    if(root==NULL){
        return;
    }
    else if(heigh==1){
        cout<<root->data<<" ";
    }
    else{
    printlevelorder(root->left,heigh-1);
    printlevelorder(root->right,heigh-1);
    }
}
void print(Node* root,int y){
    for(int i=y+1;i>0;i--){
        printlevelorder(root,i);
    }
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return (lh>rh)?(lh+1):(rh+1);
}
Node* insert(Node* root,int key){
    if(root==NULL){
        root=new Node(key);
        return root;
    }
    else if(key<=root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    return root;
}
int main(){
    int n;
    cin>>n;
    int value;
    Node* root=nullptr;
    for(int i=0;i<n;i++){
        cin>>value;
        root=insert(root,value);
    }
    int h = height(root);
    print(root,h);
    
}
