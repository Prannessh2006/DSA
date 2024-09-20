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
Node* merge(Node* head1,Node* head2){
    Node* curr1=head1;
    Node* curr2=head2;
    Node* curr= new Node(0);
    Node* newhead=curr;
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->data <=curr2->data){
            curr->next=curr1;
            curr=curr->next;
            curr1=curr1->next;
        }
        else{
            curr->next=curr2;
            curr=curr->next;
            curr2=curr2->next;
        }
    }
    while(curr2!=NULL){
        curr->next=curr2;
        curr=curr->next;
        curr2=curr2->next;
    }
    while(curr1!=NULL){
        curr->next=curr1;
        curr=curr->next;
        curr1=curr1->next;
        
    }
    return newhead;
}
void printlist(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout << curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    int size1;
    int size2;
    cin >> size1;
    cin >> size2;
    int value;
    Node* head1=nullptr;
    Node* head2=nullptr;
    for(int i=0;i<size1;i++){
        cin >> value;
        head1 = insertatendintorder(head1,value);
        
    }
    for(int i=0;i<size2;i++){
        cin >> value;
        head2 = insertatendintorder(head2,value);
    }
    Node* head3 = merge(head1,head2);
    printlist(head3);
}
