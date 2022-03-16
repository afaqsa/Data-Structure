#include <iostream>
#include <conio.h>

using namespace std;
int itrative_of_linear=0;
int itrative_of_binary =0;
int linear_search(int *arr,int size, int value){
    itrative_of_linear=0;
    for(int i=0;i<size;i++){
        itrative_of_linear++;
        if(arr[i]==value)
            return i;
    }
    return -1;
}

int binary_search(int *arr, int small_index, int large_index, int value){
itrative_of_binary =0;
    while(small_index <= large_index){
        itrative_of_binary++;
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
void init_value(int *arr , int size){

    for(int i=0; i< size ;i++){
        arr[i] = i+1;
        cout<<"Array["<<i<<"] =  "<<arr[i]<<endl;
    }
}
int main(){
    int size1= 10 , size2=100, size3=1000;
    int linear_index = 0 ;
    int  binary_index = 0;
    int* arr = new int[size1];
/* ---------------------------------------- For 10 size element -------------------------*/
    init_value(arr, size1);
    cout<<"\n\n============================================="<<endl;
    cout<<"Array of "<<size1<< " elements...\n\n";
    linear_index = linear_search(arr , size1 , 9);
    binary_index = binary_search(arr , 0, size1-1, 9);

    cout<<"Searching element is :: 9"<<endl;
    cout<<"Total Itrations of Linear Search :: "<<itrative_of_linear<<endl;
    cout<<"Total Itrations of Binary Search :: "<<itrative_of_binary<<endl;
    cout<<"\n Hence: "<<endl;
    if(itrative_of_binary < itrative_of_linear)
        cout<<"Binary search is more efficient then the linear search "<<endl;
    else
        cout<<"linear search is more efficient then the Binary search "<<endl;

        cout<<"\nPress any key to cantinue...";
        getch();

    /* ---------------------------------------- For 100 size element -------------------------*/

        init_value(arr, size2);
        cout<<"\n\n============================================="<<endl;
        cout<<" Array of "<<size2<<" elements.. \n\n";

        linear_index = linear_search(arr , size2 , 99);
        binary_index = binary_search(arr , 0, size2-1, 99);

        cout<<"Searching element is :: 99"<<endl;
        cout<<"Total Itrations of Linear Search :: "<<itrative_of_linear<<endl;
        cout<<"Total Itrations of Binary Search :: "<<itrative_of_binary<<endl;
        cout<<"\n Hence: "<<endl;
        if(itrative_of_binary < itrative_of_linear)
            cout<<"Binary search is more efficient then the linear search "<<endl;
        else
            cout<<"linear search is more efficient then the Binary search "<<endl;

            cout<<"\nPress any key to cantinue...";
            getch();

/* ---------------------------------------- For 1000 size element -------------------------*/
            init_value(arr, size3);
            cout<<"\n\n============================================="<<endl;
            cout<<" Array of "<<size3<<" elements..\n\n";
            linear_index = linear_search(arr , size3 , 999);
            binary_index = binary_search(arr , 0, size3-1, 999);

            cout<<"Searching element is :: 999"<<endl;
            cout<<"Total Itrations of Linear Search :: "<<itrative_of_linear<<endl;
            cout<<"Total Itrations of Binary Search :: "<<itrative_of_binary<<endl;
            cout<<"\n Hence: "<<endl;
            if(itrative_of_binary < itrative_of_linear)
                cout<<" Binary search is more efficient then the linear search "<<endl;
            else
                cout<<"linear search is more efficient then the Binary search "<<endl;
    return 0;
}
