#include <iostream>
using namespace std;
//Creating Node with class
class Node {
int data;
Node* pevr= NULL;
Node* next = NULL;
public:
    // this Function will add node at the beginning of list
void insertAtFirst(Node** head, int value){

        Node* temp = new Node();
        temp->data = value;
        temp->next = NULL;
        temp->pevr = NULL;

        if((*head)==NULL) {
                (*head)= temp;
        }
        else{
                (*head)->pevr = temp;
                temp->next = (*head);
                (*head) = temp;
        }
}
// Searching the Common nodes in Two linked list
void commonNodes(Node** head1, Node** head2){
        if((*head1)==NULL || (*head2)== NULL){
            cout<<"There is no common Nodes...";
            return;
        }
        int totalnode=0;
        cout<<" Common Nodes are :: ";
        for (Node* temp = (*head1); temp!= NULL; temp = temp->next) {
                for (Node* temp2 = (*head2); temp2!= NULL; temp2 = temp2->next) {
                        if(temp->data == temp2->data) {
                                cout<<temp2->data<<" -> ";
                                totalnode++;
                        }
                }
        }
        cout<<"NULL\n";
        cout<<"Total Numbers of common Nodes are :: "<<totalnode<<endl;
}
//Marging Two linked list
void MargeList(Node** head1, Node** head2){

    if((*head1)==NULL || (*head2) == NULL){
        cout<<"Marging Not Possible...";
        return;
    }
        Node* temp = (*head1);
        Node* temp2 = (*head2);
        while(temp->next!=NULL) {
                temp = temp->next;
        }
        temp2->pevr = temp;
        temp->next = temp2;
}
// Printing linked list
void printList(Node** head){

        Node* temp = (*head);
        if(temp == NULL) {
                cout<<" List is empty \n";
                return;
        }
        while(temp != NULL) {
                cout<<temp->data<<" -> ";
                temp = temp->next;
        }
        cout<<"NULL"<<endl;
}

};
int main() {

        Node* head;
        Node* head2;
        head = NULL;
        head2 = NULL;
        head->insertAtFirst(&head,1);
        head->insertAtFirst(&head,2);
        head->insertAtFirst(&head,3);
        head->insertAtFirst(&head,4);
        head->insertAtFirst(&head,5);
        head->insertAtFirst(&head,6);
        head->insertAtFirst(&head,7);
        cout<<" List 1:: ";
        head->printList(&head);

        head2->insertAtFirst(&head2,4);
        head2->insertAtFirst(&head2,5);
        head2->insertAtFirst(&head2,9);
        head2->insertAtFirst(&head2,10);
        head2->insertAtFirst(&head2,15);
        head2->insertAtFirst(&head2,20);
        head2->insertAtFirst(&head2,7);
        cout<<" List 2:: ";
        head2->printList(&head2);
        head->commonNodes(&head, &head2);
        cout<<"\nMerging tow lists :: ";
        head->MargeList(&head,&head2);
        head->printList(&head);
        return 0;
}
