//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* buildTree(Node* root){
    int data;
    cout<<"Enter node data:";
    cin>>data;
    root = new Node(data);
    if(data == -1)
        return NULL;
    cout<<"Enter the data for left node of "<<root->data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for right node of "<<root->data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}

void reverselevelOrder(Node* root){
    queue<Node*> q;
    vector<Node*> v;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        v.push_back(temp);
        q.pop();
        if(temp!=NULL){
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
        }
        else{
            q.push(NULL);
        }
    }
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]!=NULL)
        cout<<v[i]->data<<" ";
        else cout<<endl;
    }

}   

int main()
{
    Node* root = NULL;
    root = buildTree(root);
    cout<<endl;
    reverselevelOrder(root);
    return 0;
}