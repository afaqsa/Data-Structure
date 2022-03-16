#include <iostream>
#include <conio.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
class Queue{
	Node* front;
	Node* rear;
    int size;
    int lenght;
public:
	Queue(int size){
	front = NULL;
	rear = NULL;
    this->size = size;
    lenght = 0;
	}
    bool isEmpty(){
        if(front == NULL) return true;

        return false;
    }
    bool isFull(){
        if(lenght >= size) return true;

        return false;
    }
    int getSize(){
        return size;
    }

	void Enqueue(int value){
		Node* node = new Node();
		node->data = value;
        if(isFull()){
            cout<<"Queue is Full...";
            return;
        }
		if(isEmpty()){
			front = node;
			rear = front;
		}
		else{
			rear->next = node;
            rear = rear ->next;

		}
        rear->next = front;
        lenght++;
	}

    int Front(){
        if(isEmpty()) {
            cout<<"Queue is Empty..."<<endl;
            return 0;
        }
        return front->data;
    }
	int Dequeue(){
		if(isEmpty()){
			cout<<"Under flow...";
			return 0;
		}
        Node* temp = front;
        int x = temp->data;
		if(front ==  rear){
            front = NULL;
            rear = NULL;
        }else{

		front = front->next;
        rear->next = front;
    }
		delete temp;
        lenght--;
		return x;
	}
	void display(){
		if(front == NULL){
			cout<<" Under flow..."<<endl;
			return;
		}
	Node* temp = front;

		do{
			cout<<temp->data<<"->";
			temp = temp->next;
		}while(temp != rear->next );
		cout<<temp->data<<" (head)"<<endl;
	}

};
int main(){
	Queue que(5);
	int choise, value;
	while(1){
		system("cls");
		cout<<"Press 1: for Enqueue in Queue"<<endl
		    <<"Press 2: for Dequeue from Queue"<<endl
		    <<"Press 3: for Display  Queue"<<endl
            <<"Press 4: show Frist value Queue"<<endl
            <<"Press 5: for Size of Queue"<<endl
		    <<"Press 6: for Exit"<<endl
		    <<"\n Enter your choise :: ";
		    cin>> choise;
		    switch(choise){
		    	case 1:
		    		cout<<" Enter the Value :: ";
		    		cin >> value;
		    		que.Enqueue(value);
		    		break;
		    	case 2:
		    		cout<<" Taking out value :: "<<que.Dequeue()<<endl;
		    		break;
		    	case 3:
		    		cout<<" The Elements of Queue are :: "<<endl;
		    		que.display();
		    		break;
                case 4:
		    		cout<<" The First Element of Queue is  :: "<<que.Front();
		    		break;
                case 5:
		    		cout<<" The Size of Queue is :: "<<que.getSize();
		    		break;
		    	case 6:
		    		exit(0);
			}
		    getch();
	}
}
