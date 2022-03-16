#include <iostream>
using namespace std;
int MAX = 5;// making a globle variable
// this function will check the under flow condition
bool isUnderFlow(int index){
    if(MAX == 0 || index > MAX || index < 0 ){
        return true;
    }
    return false;
}
int main()
{
    //declaring the variables
    int arr[MAX] = {1,2,3,4,5};
    int index;
    char choise;
    cout<<"The array is :"<<endl;
//printing the array...
    for (int i = 0; i < MAX; i++)
    {
        cout<<"Element of index "<< i <<" is : "<<arr[i]<<endl;
    }
    //using the while loop so user can delete all Elements of array
while(choise!='N' || choise != 'n'){
    //taking index from user
    cout<<"Enter the index of that element that you want to delete : ";
    cin>> index;

    if(isUnderFlow(index)) // checking the condition
    {
        cout<<"Error Under flow......"<<endl;
    }
    else{
        // this for loop use to shift elements of array
        // in order to delete the element of given index
        for (int i = index; i < MAX; ++i)
        {
            arr[i] = arr[i+1];
        }
        MAX--; // decreasing the size of array
    }
    cout<<"New array is :"<<endl;
    //printing the new array
    for (int i = 0; i < MAX; i++)
    {
        cout<<"Element of index "<< i <<" is : "<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"Do you want to delete more element Y/N : ";
    cin>>choise; // if user want to delete more elements then he can by chosinig Y or y
}
    return 0;
    // end the program
}
