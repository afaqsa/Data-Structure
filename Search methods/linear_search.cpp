#include <iostream>
using namespace std;

int linear_search(int *arr,int size, int value, int *index){
    int count;
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            index[count]= i;
            count++;
        }
    }
    return count;
}

int main(){
    int size;
    int total_index;
    int*  all_index = new int[2];
    int value;

    cout<<"Enter the size of array ::  ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the" <<size<< " Elements of Array :"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Element of Array [ "<<i <<" ] :: ";
        cin >> arr[i];
    }

    cout<<"\n Enter the value that you want to find ";
    cin >> value ;

    total_index = linear_search(arr,size,value,all_index);
    cout<<"All index where the element "<<value<<" that are :: "<<endl;
    cout<<"Indexes [ ";
    for (int i = 0; i < total_index; ++i)
    {
        cout<<all_index[i];
        if(i != total_index-1){
            cout<<",";
        }
    }
cout<<" ]"<<endl;
    return 0;
}
