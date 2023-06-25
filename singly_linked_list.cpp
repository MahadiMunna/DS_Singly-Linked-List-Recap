#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void print_linked_list(Node* &head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_at_position(Node* head,int p, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1;i<=p-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;


    cout<<a->val<<endl;
    cout<<a->next->val<<endl;

    print_linked_list(a);
    cout<<endl;
    insert_at_position(a,2,50);
    print_linked_list(a);

    return 0;
}