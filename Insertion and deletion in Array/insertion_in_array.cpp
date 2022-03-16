#include <iostream>
using namespace std;
//#define cal_size(type) (char *)(&type+1)-(char*)(&type)
#define MAX 5   //defining a constant size of array

//this function check that the array is Over-flow or not
bool isOverFlow(int index){
	if(MAX <= index )   //checking the condition that indx is gearter then the size
		return true;	// of array then it's over-flow and return true

	return false;		// esle return false if array is not over-flow
}

int main(){

	int arr[MAX]= {1,2,4,5};	//defining a hard coded array of size 5
	int index,value;			// declaring varibles for index and value (where user can enter values)
	cout<<"Array is :"<<endl;
	// using for loop to print the array
	for(int i=0; i<MAX-1; i++){
		cout<<"Element of index "<<i<<" is: "<<arr[i]<<endl;
	}
	cout<<"\n-----------Getting Index------------"<<endl;
	cout<<"Enter the index their you want to add Element: ";
	cin >> index;   // getting the value of index

//checking the condition for over-flow by function (isOverFlow)
	if(isOverFlow(index))
	{
		cout<< "Array is Over flow.....";  // if array is over-flow then it print that
	}
	else
	{
		cout<<"Enter the value that you want to add : ";
		cin >> value;		// getting value for add

// using for loop for insertion element in array
		for(int i = MAX; i>index; i--){
			arr[i] = arr[i -1];  // moving elements 1 step forword
		}
		arr[index]= value; // chaing the value at given index with given value
		cout<<"\nNew array is: \n"<<endl;
		// printing the updated array
		for(int i=0; i<MAX; i++){
			cout<<"Element of index "<<i<<" is: "<<arr[i]<<endl;
		}
	}
	// Ending the program
	return 0;
}
