#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            this->next  = NULL;
        }
        delete next;
    }

};

void push(Node* &tail,int data){
    Node* temp = new Node(data);
    Node* prev = tail;
    prev->next = temp;
    tail = temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* &head){
    Node* forward = NULL;
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{
    Node* n = new Node(0);
    Node* head;
    Node* tail;
    head = n;
    tail = n;
    push(tail,3);
    push(tail,5);
    push(tail,6);
    push(tail,7);
    push(tail,1);
    print(head);
    head = reverse(head);
    print(head);
    return 0;
}