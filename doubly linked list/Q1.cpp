#include <iostream>
using namespace std;
// Creating Nodes
class Node {
int data;
Node* pevr= NULL;
Node* next = NULL;
public:
static int lenght;
Node(){
        lenght++; // Counting the total numbers of linked list
}
// Inserting nodes at first position of list
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
// Inserting at any position in list
void insertAt(Node** head, int position, int data){
        int i=1;
        Node* temp = (*head);
        if(position > lenght) {
                cout<<" Invalid Position... "<<endl;
                return;
        }


        while(i <position-1) {
                temp = temp->next;
                i++;
        }

        Node* newNode = new Node();
        newNode->data = data;
        newNode->pevr = temp->pevr;
        newNode->next = temp->next;
        temp->next = newNode;

}
//Printing the linked list
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
int Node::lenght=0;

int main() {
        int posi;
        int value;
        Node* head;
        head = NULL;
        head->insertAtFirst(&head,1);
        head->insertAtFirst(&head,2);
        head->insertAtFirst(&head,3);
        head->insertAtFirst(&head,4);
        head->insertAtFirst(&head,5);
        head->insertAtFirst(&head,6);
        head->insertAtFirst(&head,7);

        head->printList(&head);
        cout<<"\nEnter the position on that you want to enter Value :: ";
        cin >>  posi;
        cout<<" Enter the Value to insert :: ";
        cin >> value;
        head->insertAt(&head, posi, value);
        head->printList(&head);
        return 0;
}
