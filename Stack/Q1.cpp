#include <iostream>
#include <conio.h>
using namespace std;

class Stack
{
    int size;
    int* arr;
    int top;
public:
    Stack(){
        size =0;
        top =-1;
        arr = new int[0];
    }
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void setSize(int size){
        this->size = size;
        arr = new int[size];
    }
    int getSize(){
        return size;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(top>=size-1) return true;

        return false;
    }



    void push(int value){
        if(isFull()) {
            cout<<"\n Stack is overFlow..."<<endl;
            return;
        }
        arr[++top] = value;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Underflow..."<<endl;
            return -1;
        }
        int value = arr[top];
        --top;
        return value;
    }
    int peek(){
        if(isEmpty()){
            cout<<"Stack is Underflow..."<<endl;
            return -1;
        }
        return arr[top];
    }
    void display(){
        if(isEmpty()){
            cout<<"Stack is Underflow..."<<endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Stack stack;
    int choise, val;
    int size;
    cout <<"Enter the Size of Stack :: ";
    cin >> size;
    stack.setSize(size);
   while(1){
       system("cls");
       cout<<"Press 1: for Puch in stack "<<endl
           <<"Press 2: for Pop from stack "<<endl
           <<"Press 3: for Peek from stack "<<endl
           <<"Press 4: for Display in stack "<<endl
           <<"Pree 5:  Exit "<<endl
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
           default:
               exit(0);
               break;
           }
           getch();
   }

return 0;
}
