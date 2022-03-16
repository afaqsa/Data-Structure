#include <iostream>
using namespace std;
// creating node with class
class Node {

public:
int data;
Node* next;
Node(){
        data = 0;
        next = NULL;
}
// created member funtion that insert mode in list
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
// created member function that search node position bu given data
int searchNode(Node** head, int searchValue){

        int pos=0;
        Node* current = (*head);
        while(current != NULL) {
                pos++;
                if(current->data == searchValue) {
                        return pos;
                }
                current = current->next;
        }
        return -1;
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
                int searched;
                cout<<"Press 1 :: For insert the value in linked list\n"
                    <<"Press 2 :: For Search value in linked list \n"
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
                        cout << "\nEnter the Value for searching  :: ";
                        cin >> value;
                        searched = head->searchNode(&head, value);
                        if(searched == -1) {
                                cout << "Searching Value is not found::\n\n";
                        }
                        else{
                                cout<<"Searched value is Found at "<< searched <<" position \n\n";
                        }
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
