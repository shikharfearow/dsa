#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(this->next != NULL && this->prev != NULL){
            this->next = NULL;
            this->prev = NULL;
            delete next;
            delete prev;
        }
    }

};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertBack(Node* &tail,int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertPos(Node* &head,Node* &tail,int data,int pos){

    if(pos==1){
        insertHead(head,data);
        return;
    }

    Node* temp = new Node(data);
    Node* curr = head;
    int cnt = 1;
    while(cnt!=pos){
        curr = curr->next;
        cnt++;
    }
    if(curr->next == NULL){
        insertBack(tail,data);
        return;
    }
    temp->prev = curr->prev;
    curr->prev->next = temp;
    curr->prev = temp;
    temp->next = curr;
}

void deleteNode(Node* &head,int pos){
    int cnt = 1;
    Node* curr = head;

    if(pos==1){
        head = curr->next;
        curr->next = NULL;
        delete curr;
        return;
    }

    while(cnt!=pos){
        curr = curr->next;
        cnt++;
    }

    curr->prev->next = curr->next;
    if(curr->next != NULL) curr->next->prev = curr->prev;
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;

}

Node* reverse(Node* &head){
    if(head == NULL){
        return head;
    }

    Node* forward;
    Node* curr = head;
    Node* prev = NULL;

    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        curr->prev = forward;
        prev = curr;
        curr = forward;
    }

    return prev;
}

int main()
{
    Node* n1 = new Node(3);
    Node* head = n1;
    Node* tail = n1;
    insertHead(head,5);
    print(head);
    insertBack(tail,10);
    print(head);
    insertHead(head,4);
    print(head);
    insertBack(tail,0);
    print(head);
    insertPos(head,tail,7,1);
    print(head);
    head = reverse(head);
    print(head);

    return 0;
}