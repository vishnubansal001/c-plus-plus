#include <iostream>


using namespace std;
class linkedList{
    public:
    class Node{
        public:
        int data;
        Node*next;
    }*head = NULL;
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
    void display(){
        Node* ptr;
        ptr = head;
        while(ptr!=NULL){
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL"<<endl;
    }
    void deletion(int val){
        Node* temp = head;
        if(head==NULL){
            return;
        }
        if(head->data==val){
            Node* todelete1 = head;
            head = head->next;
            delete todelete1;
        }
        while(temp->next->data!=val){
            temp=temp->next;
        }
        Node* todelete = temp->next;
        temp->next=temp->next->next;
        delete todelete;
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
    obj.display();
    int b;
    cin>>b;
    obj.deletion(b);
    obj.display();
    return 0;
}
