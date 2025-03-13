#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(){
        this->data = 0;
        this->next = NULL;
    }
    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertathead(node* &head, int data){
    //step 1 
    node* newnode = new node(data);
    // step 2
    newnode-> next = head;
    //step 3
    head= newnode;

}
void print(node*head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    node*head = new node(50);
    insertathead(head,20);
    insertathead(head,52);
    insertathead(head,60);
    insertathead(head,54);
    insertathead(head,87);

    print(head);
    return 0;
}