// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int value){
        data = value;
        next = nullptr;
    }
};
void printlist(node* head){
    node* curr = head;
    while(curr!=nullptr){
        cout << curr->data;
        curr = curr->next;
    }
}
node* insertafter(node* head,int key,int value);
node* insertbegin(node *head,int value);
node* insertend(node* head,int value);
node* insertbefore(node* head,int key,int value);
int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(4);
    head = insertafter(head,2,3);
    head = insertbegin(head,0);
    head = insertend(head,5);
    head = insertbefore(head,4,9);
    printlist(head);
}
node *insertafter(node* head,int key,int value){
    node* curr = head;
    while(curr!=nullptr){
        if(curr->data == key){
            break;
        }
        curr = curr->next;
    }
    if(curr->next==nullptr){
        return head;
    }
    node *newnode = new node(value);
    newnode->next = curr->next;
    curr->next = newnode;
    return head;
}
node* insertbegin(node* head,int value){
    node* curr = new node(value);
    curr->next = head;
    return curr;
}
node* insertend(node* head,int value){
    node* curr = head;
    while(curr->next!=nullptr){
        curr = curr->next;
    }
    node* last = new node(value);
    curr->next = last;
    last->next=nullptr;
    return head;
}
node* insertbefore(node* head,int key,int value){
    node* curr = head;
    while(curr!=nullptr){
        if(curr->next->data==key){
            break;
        }
        curr = curr->next;
    }
    if(curr==nullptr){
        return head;
    }
    node* before = new node(value);
    before->next=curr->next;
    curr->next=before;
    return head;
}
