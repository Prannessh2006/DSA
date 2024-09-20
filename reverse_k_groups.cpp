#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value): data(value){
        next=nullptr;
    }
};
Node* insertatendintorder(Node* head,int value){
    Node* newnode = new Node(value);
    if(head==nullptr){
        head=newnode;
        return head;
    }
    else{
        if(head->data>=value){
            newnode->next=head;
            head=newnode;
            return head;
        }
        else{
            Node* curr=head;
            while(curr->next!=NULL){
                if(curr->next->data>value){
                    newnode->next=curr->next;
                    curr->next=newnode;
                    return head;
                }
                curr=curr->next;
            }
            curr->next=newnode;
            return head;
        }
    }
}


Node* kreverse(Node* head,int k){
    Node* curr=head;
    Node* prev=nullptr;
    Node* next=nullptr;
    int count=0;
    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(curr!=NULL){
        head->next=kreverse(next,k);
    }
    return prev;
}


void printlist(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout << curr->data <<" ";
        curr=curr->next;
    }
}
int main(){
    int size1,k;
    cin >> size1;
    int value;
    Node* head1=nullptr;
    for(int i=0;i<size1;i++){
        cin >> value;
        head1 = insertatendintorder(head1,value);
    }
    cin >> k;
    head1 = kreverse(head1,k);
    printlist(head1);
    
    
}
