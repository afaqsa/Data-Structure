#include <iostream>
using namespace std;

/* Creating Nodes with the help of class */
class Node {

public:
int data;
Node* next;
/* Created a member function of node class which can add values in node */
void insertNode(Node** head,Node** tail, int num){

        Node* temp = new Node();
        temp->data = num;
// cheacking that head is Null or not if null then add first node at the head
        if((*head) == NULL) {

                (*head)= temp;
                (*tail) = (*head);
        }
        //else add node at the tail of linked list
        else{
                (*tail)->next = temp;
                (*tail) = (*tail)->next;
        }
        (*tail)->next = NULL;
}
//Member function of node class :: Printing the Linked list
void print(Node** head){
        Node* temp = (*head);
        if((*head) == NULL) {
                cout << "Linked is empty "<<endl;
                return;
        }
        while(temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
        }
        cout<<"NULL\n"<<endl;
}
/* Member function of node class :: it will reverse the linked List
   if list is
   2 -> 3 -> 4 -> 5 -> Null
   it will be
   5 -> 4 -> 3 -> 2 -> NULL */
void Reverse(Node** head){
        Node* curr = (*head);
        Node* prvi = NULL;
        Node* Next = NULL;
        if((*head) == NULL) {
                cout << "Linked list is empty \n"<<endl;
                return;
        }
        while(curr!=NULL) {
                Next = curr->next;
                curr->next = prvi;
                prvi = curr;
                curr = Next;
        }
        (*head) = prvi;
        cout<<"List is Successfuly Reversed \n\n";
}
};

int main() {
// creating tow Node pointers head and tail
        Node* head;
        Node* tail;
        head = NULL;
        tail = NULL;

        while(1) {
                int choise;
                int value;
                cout<<"Press 1 :: For insert the value in linked list\n"
                    <<"Press 2 :: For Reversed the linked list \n"
                    <<"Press 3 :: For Printing Linked list\n"
                    <<"Press 4 :: For Exit Program\n";
                cin >> choise;
                switch (choise) {
                case 1:
                        cout<<"\nEnter the Value for insert :: ";
                        cin >> value;
                        head->insertNode(&head, &tail, value);
                        break;
                case 2:
                        head->Reverse(&head);
                        break;
                case 3:
                        cout << "Lisked list is :: \n";
                        head->print(&head);
                        break;
                default:
                        exit(0);

                }
                cout<<endl<<endl;
        }


        return 0;
}
