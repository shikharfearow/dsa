#include<iostream>
using namespace std;

class LinkedList {
    public:
    int data;
    LinkedList* node;

    LinkedList(int data){
        this->data = data;
        this->node = NULL;

    }

    ~LinkedList(){
        int val = this->data;
        if(this->node != NULL) this->node = NULL;
        delete node;
    }
};

LinkedList* reverse(LinkedList* &head){

    if(head==NULL||head->node==NULL)
    {
        return head;
    }

    LinkedList* prev = NULL;
    LinkedList* curr = head;
    LinkedList* forward = NULL;

    while(curr!=NULL){
        forward = curr->node;
        curr->node = prev;
        prev = curr;
        curr = forward;
    }

    return prev;

}

void middle(LinkedList* head){
    LinkedList* fast = head;
    LinkedList* slow = head;
    int pos = 0;
    while (fast!=NULL)
    {
        fast = fast->node;
        if(fast!=NULL){
            pos++; 
            fast = fast->node;
            slow = slow->node;
        }
    }
    
    cout<<"Data: "<<slow->data<<" at "<<pos+1<<endl;

}

void printLL(LinkedList* head){
    LinkedList* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->node;
    }
    cout<<endl;
}

void insertStart(LinkedList* &head,int data){
    LinkedList* temp = new LinkedList(data);
    temp->node = head;
    head = temp;
}

void insertEnd(LinkedList* &tail,int data){
    LinkedList* temp = new LinkedList(data);
    temp->node = NULL;
    tail->node = temp;
    tail = temp;
}

void insertAtPos(LinkedList* &head,LinkedList* &tail,int data,int pos){
    LinkedList* temp = new LinkedList(data);
    LinkedList* prev = head;
    
    //insert at start
    if(pos == 1){
        insertStart(head,data);
        return;
    }
    
    int cnt = 1;
    while(cnt<pos-1){
        prev = prev->node;
        cnt++;
    }
    //Insert at end
    if(prev->node->node == NULL){
        insertEnd(tail,data); 
        return;   
    }
    temp->node = prev->node;
    prev->node = temp;
}

void insertAtVal(LinkedList* &head,int data,int val){
    LinkedList* temp = new LinkedList(data);
    LinkedList* prev = head;
    while(prev->data != val){
        prev = prev->node;
    }
    temp->node = prev->node;
    prev->node = temp;
}

void deleteAtPos(LinkedList* &head,LinkedList* tail, int pos){
    LinkedList* prev = head;
    LinkedList* curr;
    int cnt = 1;
    while(cnt<pos-1){
        prev = prev->node;
        curr = prev->node;
        cnt++;
    }
    prev->node = curr->node;
    delete curr;
}

int main()
{
    LinkedList* n1 = new LinkedList(5);
    LinkedList* head = n1;
    LinkedList* tail = n1;
    printLL(head);
    insertStart(head,15);
    printLL(head);
    insertEnd(tail,22);
    printLL(head);
    insertEnd(tail,20);
    insertEnd(tail,12);
    insertEnd(tail,9);
    printLL(head);
    // insertAtPos(head,tail,10,1);
    // insertAtPos(head,tail,23,5);
    // insertAtPos(head,tail,19,6);
    // printLL(head);
    //deleteAtPos(head,tail,6);
    //printLL(head);
    middle(head);
    reverse(head);
    printLL(head);
    return 0;
}