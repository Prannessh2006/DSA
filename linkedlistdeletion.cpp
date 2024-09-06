#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

Node* IAB(Node* head,int v)
{
    Node* newNode = new Node(v);
    if(head == nullptr)
    {
        return newNode;
    }
    
    Node* curr = head;
    while(curr->next != nullptr)
    curr= curr->next;
    
    curr->next = newNode;
    return head;
}

Node* DeleteNode(Node* head,int v)
{
    while(head->data == v && head!=nullptr)
    {
        Node * temp = head;
        head= head->next;
        delete(temp);
        
    }
    
    Node* curr = head;
    while(curr != nullptr && curr->next != nullptr)
    {
        if(curr->next->data == v)
        {
            Node* temp1 = curr->next;
            curr->next = curr->next->next;
            delete(temp1);
        }
       else
       {
        curr=curr->next;
       }
    }
    return head;
     
}
void traverse(Node* head)
{
    Node* curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() {
    // Write C++ code here
    Node* head = nullptr;
    head = IAB(head,5);
    head = IAB(head,1);
    head = IAB(head,1);
    head = IAB(head,1);
    head = IAB(head,4);
    traverse(head);
    head=DeleteNode(head,);
    cout<<endl;
    traverse(head);

    return 0;
}
