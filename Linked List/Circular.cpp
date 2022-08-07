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
        int val = data;
        if(this->next!=NULL){
            this->next = NULL;
        }
        delete next;
        cout<<"Removed "<<val<<" from list"<<endl;
    }

};

void insertNode(Node* &tail,int data,int key){

    Node* temp = new Node(data);
    Node* curr = tail;
    
    if(tail == NULL){
        tail = temp;
        temp->next = temp;
        return;
    }

    while(curr->data!=key){
        curr = curr->next;
    }

    temp->next = curr->next;
    curr->next = temp;

}

void print(Node* tail){

    if(tail == NULL){
        cout<<"EMPTY";
        return;
    }

    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(temp != tail);
    cout<<endl;
}

void deleteNode(Node* tail,int key){
    Node* curr = tail;
    Node* prev = curr;

    while(curr->data!=key){
        prev = curr;
        curr = curr->next;
    }

    if(prev == curr){
        curr->next = NULL;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node* tail = NULL;
    insertNode(tail,3,4);
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,6,5);
    print(tail);
    insertNode(tail,7,5);
    print(tail);
    insertNode(tail,12,6);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    return 0;
}