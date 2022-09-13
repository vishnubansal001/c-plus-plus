#include <iostream>

using namespace std;
class linkedList{
    public:
    class Node{
        public:
        int data;
        Node*next;
    }*head = NULL;
    // void insertA(int value){
    //     Node* temp;
    //     temp= new Node;
    //     temp->data=value;
    //     temp->next=head;
    //     head = temp;
    // }
    void insert(int val){
        Node* n = new Node;
        n->data=val;
        if(head==NULL){
            head=n;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            
        }
        temp->next=n;
    }
    void insertAtAny(int value, int position){
        Node* n = new Node;
        n->data=value;
        if(head==NULL){
            head=n;
            return;
        }
        Node* temp = head;
        int t = position - 2;
        for(int i=0;i<t+1;i++){
            temp=temp->next;
            if(i==t){
                n->next=temp->next;
                temp->next=n;
            }
        }
    }
    void display(){
        Node* ptr;
        ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
    }
    bool search( int key){
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
}
};

int main()
{
    linkedList obj;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        obj.insert(a);
    }
    int a;
    cin>>a;
    cout<<obj.search(a)<<endl;
    obj.display();
    return 0;
}


