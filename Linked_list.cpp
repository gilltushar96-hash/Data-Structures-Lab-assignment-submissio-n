// Add boundary cases in the deletion and insertion list 
#include<iostream>
using namespace std;
class Node{
    public:
    int value=0;
    Node*next_pointer;
    Node(int data){
        value=data;
        next_pointer=NULL;
    }
};
void traverse_list(Node* head);
void deletion_in_list(Node* &head,int position);
void insertion_in_list(Node* &head,int value,int position);
void updation_in_list(Node* &head,int data,int position);

void insertion_in_list(Node* &head,int value,int position)
{
    int case_variable=0;
    do{
    cout<<"Select on of the following statements"<<endl;
    cout<<"Enter 1 to insert the value at the start of the list"<<endl;
    cout<<"Enter 2 to insert the value at the end of the list"<<endl;
    cout<<"Enter 3 to insert the value at the middle of the list"<<endl;
    cout<<"Enter 4 to exit the insertion process"<<endl;
    cin>>case_variable;
    switch(case_variable){
        case 1:
        {
            Node*newhead=new Node(value);
            newhead->next_pointer=head;
            head=newhead;
            traverse_list(head);
            break;
        }
        case 2:
        {
            Node*temp=head;                     //for traversing the list//
            Node*ending_node=new Node(value);
            while(temp->next_pointer!=NULL){
                temp=temp->next_pointer;
            }
            temp->next_pointer=ending_node;
            traverse_list(head);
            break;
        }
        case 3:
        {
            if(position==1){
                cout<<"You are inserting at the start of the list not middle use the 1 function"<<endl;
                continue;
            }
        int count=1;
        Node*temp=head;
        Node*middle_insertion_node=new Node(value);
        while(count<(position-1)){
            temp=temp->next_pointer;
            count++;
        }
        middle_insertion_node->next_pointer=temp->next_pointer;
        temp->next_pointer=middle_insertion_node;
        traverse_list(head);
        break;
        } 
    }
}while(case_variable!=4);
}
void deletion_in_list(Node* &head,int position){
        int case_variable=0;
    do{
    cout<<"Select on of the following statements"<<endl;
    cout<<"Enter 1 to delete the value at the start of the list"<<endl;
    cout<<"Enter 2 to delete the value at the end of the list"<<endl;
    cout<<"Enter 3 to delete the value at the middle of the list"<<endl;
    cout<<"Enter 4 to exit the insertion process"<<endl;
    cin>>case_variable;
    switch(case_variable){
    case 1:
        {
            Node*old_head=head;
            head=head->next_pointer;
            delete old_head;
            traverse_list(head);
            break;
         }
        case 2:
        {
            Node*temp=head;                     //for traversing the list//
            while(temp->next_pointer->next_pointer!=NULL){
                temp=temp->next_pointer;
            }
            Node*ending_node=temp->next_pointer;
            delete(ending_node);
            temp->next_pointer=NULL;

            traverse_list(head);
            break;
        }
        case 3:
        {
        int count=1;
        Node*temp=head;
        
        while(count<(position-1)){
            temp=temp->next_pointer;
            count++;
        }
        Node*middle_deletion_node=temp->next_pointer;
        temp->next_pointer=temp->next_pointer->next_pointer;
        delete(middle_deletion_node);
        traverse_list(head);
        break;
        }
}
    }while(case_variable!=4);
}
void updation_in_list(Node* &head,int data,int position){
    int count=1;
    Node*temp=head;
    while(count<position)
   {
    temp=temp->next_pointer;
    count++;
   }
   temp->value=data;
}
void traverse_list(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next_pointer;
    }
    cout<<"NULL"<<endl;
}
    int main(){
    Node*node1=new Node(1);
    Node*node2=new Node(2);
    Node*head=node1;
    node1->next_pointer=node2;
    traverse_list(head);
    insertion_in_list(head,5,3);
    traverse_list(head);
    deletion_in_list(head,5);
    traverse_list(head);
    updation_in_list(head,8,3);
    traverse_list(head);



}