#include<iostream>
using namespace std;
struct AVL{
    int data;
    AVL* left;
    AVL* right;
    int height;
    AVL(int v): data(v),left(nullptr), right(nullptr),height(1){}
};
int heigh(AVL* node){
    return node?node->height:0;
}
int balance(AVL* node){
    return node?heigh(node->left)-heigh(node->right):0;
}
AVL* leftrotate(AVL* x){
    AVL* y = x->right;
    x->right=y->left;
    y->left=x;
    x->height = 1+max(heigh(x->left),heigh(x->right));
    y->height= 1+max(heigh(y->left),heigh(y->right));
    return y;
}
AVL* rightrotate(AVL* x){
    AVL* y = x->left;
    x->left=y->right;
    y->right=x;
    x->height = 1+max(heigh(x->left),heigh(x->right));
    y->height= 1+max(heigh(y->left),heigh(y->right));
    return y;
}
AVL* insert(AVL* node,int value){
    if(!node) return new AVL(value);
    if(value<node->data){
        node->left=insert(node->left,value);
    }
    else if(value>=node->data){
        node->right=insert(node->right,value);
    }
    node->height=1+max(heigh(node->left),heigh(node->right));
    int b = balance(node);
    if(b<-1 && value>node->right->data){
        return leftrotate(node);
    }
    else if(b>1 && value<node->left->data){
        return rightrotate(node);
    }
    else if(b>1 && value>node->left->data){
        node->left=leftrotate(node->left);
        return rightrotate(node);
    }
    else if(b<-1 && value<node->right->data){
        node->right=rightrotate(node->right);
        return leftrotate(node);
    }
    return node;
}
void preorder(AVL* node){
    if(node){
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
    }
}
int main(){
    int arr[5]={10,20,30,40,50};
    AVL* root=nullptr;
    for(int i:arr){
        root=insert(root,i);
    }
    preorder(root);
}
