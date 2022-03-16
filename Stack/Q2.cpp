#include <iostream>
#include <conio.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
class Stack{
private:
        int lenght;
        Node* top;
public:
        Stack(){
            lenght = 0;
            top = NULL;
        }
        int getSize(){
            return lenght;
        }
        bool isEmpty(){
            if(top==NULL) return true;
            return false;
        }
        void push(int value){
            Node* newNode = new Node();
            newNode-> data = value;
            if(isEmpty()){
                top = newNode;
                top->next = NULL;
            }else{
                newNode->next = top;
                top = newNode;
            }
            lenght++;
        }
        int pop(){
            if(isEmpty()){
                cout<<"\n Stack is Empty..."<<endl;
                return 0;
            }
            Node* temp = top;
            top = top -> next;
            lenght--;
            return temp->data;

        }
        int peek(){
            if(isEmpty()){
                cout<<"\n Stack is Empty..."<<endl;
                return 0;
            }
            return top->data;
        }
        void display(){
            if(isEmpty()){
                cout<<"\n Stack is Empty..."<<endl;
                return;
            }
            Node *temp = top;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp= temp-> next;
            }
            cout<<"NULL"<<endl;
        }
};
int main()
{
    int choise, val;
    Stack stack;
    while(1){
        system("cls");
        cout<<"Press 1: for Puch in stack "<<endl
            <<"Press 2: for Pop from stack "<<endl
            <<"Press 3: for Peek from stack "<<endl
            <<"Press 4: for Display in stack "<<endl
            <<"Press 5: for Total lenght of Stack "<<endl
            <<"Press 6:  Exit "<<endl
            <<"\nEnter your Choise :: ";
            cin>>choise;
            switch (choise)
            {
            case 1:
                    cout<<"Enter the Value :: ";
                    cin >> val;
                    stack.push(val);
                break;
            case 2:
                    cout<<"How many values you want to pop ::  ";
                    cin >> val;
                    for (int i = 0; i < val; ++i)
                    {
                        cout<<stack.pop()<<" ";
                    }
                break;
            case 3:
                    cout<<"Top most value is :: "<<stack.peek()<<endl;
                break;
            case 4:
                    cout<<"All values of stack are :: "<<endl;
                    stack.display();
                break;
            case 5:
                    cout<<"Total Size of Stack is :: "<<stack.getSize()<<endl;

                break;
            default:
                exit(0);
                break;
            }
            getch();
    }

    return 0;
}
