#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int value){
        data=value;
        next=NULL;
        prev=NULL;
    }
};

void insertAtStart(Node* &head,int value){
    Node* n = new Node(value);
    n->next = head;
    if(head!=NULL){
        head->prev=n;
    }
    
    head=n;
}
void insertAtTail(Node* &head,int value){
    Node* n = new Node(value);
    Node* temp=head;
    
    if(head==NULL){
        insertAtStart(head,value);
        return;
    }
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
    n->prev=temp;
}

void insertAtAny(Node* &head,int value,int pos){
    Node* n = new Node(value);
    Node* temp = head;
    
    if(head==NULL){
        insertAtStart(head,value);
        return;
    }
    
    int t = pos- 2;
    for(int i=0;i<t+1;i++){
        temp=temp->next;
        if(i==t){
            n->next=temp->next;
            temp->next->prev=n;
            temp->next=n;
            n->prev=temp;
        }
    }
}
void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertAtTail(head,a);
    }
    display(head);
    int a,b;
    cin>>a>>b;
    insertAtAny(head,a,b);
    display(head);
    return 0;
}

