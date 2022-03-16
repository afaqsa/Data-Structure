#include <iostream>
using namespace std;

int binary_search(int *arr, int small_index, int large_index, int value){

    while(small_index <= large_index){
        
        int mid = (small_index + large_index)/2;

        if(arr[mid] == value)
            return mid;
        if(arr[mid]>value)
            large_index = mid -1;
        else
            small_index = mid + 1;
    }
    return -1;
}

int main(){
    int size;
    int value;

    cout<<"Enter the size of array ::  ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the" <<size<< " Elements of Array (*sorted) :"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Element of Array [ "<<i <<" ] :: ";
        cin >> arr[i];
    }

    cout<<"\n Enter the value that you want to find ";
    cin >> value ;

    int index = binary_search(arr,0,size-1,value);
    if(index == -1)
     cout<<"The  element "<<value<<" is not present "<<endl;
   else
    cout<<"The  element "<<value<<" is at index  :: "<<index<<endl;
   
    return 0;
}
