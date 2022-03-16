#include <iostream>
using namespace std;

// Creating node with class
class Node {

public:
int data;
Node* next;
Node(){
        data = 0;
        next = NULL;
}
//Creating member function then insert node in list
void insertNode(Node** head,Node** tail, int num){

        Node* temp = new Node();
        temp->data = num;

        if((*head) == NULL) {

                (*head)= temp;
                (*tail) = (*head);
        }
        else{
                (*tail)->next = temp;
                (*tail) = (*tail)->next;
        }
        (*tail)->next = NULL;
}
// created member function that print list
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
// Created member function that delete node from list
void deleteNode(Node** head, int deleteValue){
        Node* temp = (*head);
        if((*head) == NULL) {
                cout << "Linked list is empty \n"<<endl;
                return;
        }
        if(temp->data == deleteValue) {
                Node* del = (*head);
                (*head) = temp->next;
                delete del;
                cout<<"Node deleted Successfuly \n\n";
                return;
        }
        while(temp!= NULL) {
                if(temp->next->data == deleteValue) {
                        Node* del = temp->next;
                        temp->next = temp->next->next;
                        delete del;
                        cout<<"Node deleted Successfuly \n\n";
                        return;
                }
                temp = temp->next;
        }
        cout<<"Node isn't delete because Value is not found";
}
};
int main() {

        Node* head;
        Node* tail;
        head = NULL;
        tail = NULL;

        while(1) {
                int choise;
                int value;
                cout<<"Press 1 :: For insert the value in linked list\n"
                    <<"Press 2 :: For Delete value in linked list \n"
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
                        cout << "\nEnter the Value for deleting :: ";
                        cin >> value;
                        head->deleteNode(&head, value);
                        break;
                case 3:
                        cout << "Lisked list is :: \n";
                        head->print(&head);
                        break;
                default:
                        exit(0);

                }
        }

        return 0;
}
