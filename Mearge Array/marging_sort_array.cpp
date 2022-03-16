#include <iostream>
using namespace std;

// Get value from user in Array
void insertElementsInArray(int *arr, int size){

  for (int i = 0; i < size; i++) {
      cout<< "Element of Array["<<i<<"] ::  ";
      cin >>arr[i];
  }
}
//Display the values of array on console
void printArray(int* arr, int size){
  for (int i = 0; i < size; i++) {
      cout<< "Array["<<i<<"] ::  " << arr[i] << endl;
  }
}
// this Function sort the marge array
void sortedArray(int* array , int n){
  for (int i = 0; i < n-1; i++) {
    int min =i;
    for (int j = i+1; j < n; j++) {
      if(array[j]<array[min]){
        min =j;
      }
    }
    if(min != i){
      int temp = array[min];
      array[min] = array[i];
      array[i] = temp;
    }
  }

}
//Marging second Array in first arrray
void MargeTwoArrays(int *array_1, int size1 , int *array_2 , int size2){
    int n = size1 + size2;
    int *array = new int[n];
    int j=0;
    int k=0;
    for (int i = 0; i < n; i++) {
      if(j<size1 && array_1[j]<array_2[k]) // cheacking the element of array 1 is that smaller
      {
        array[i] = array_1[j];
        j++;
      }
      else if(k < size2){ // 2nd condition
        array[i] = array_2[k];
        k++;
      }
      else  {
          array[i] = array_1[j];
          j++;
        }
    }
    sortedArray(array , n); // calling fuction which sort the array
    printArray(array,n );
}

int main() {

//Declaring Variables
  int size1=0;
  int size2 =0;

  cout<<"\nEnter the Size of Array 1 :: ";
  cin >> size1;

  int* arr1 = new int[size1]; //Creating dynamic Array
  cout<<"\nEntre the Elements of Array 1 :: "<<endl;
  insertElementsInArray(arr1, size1); // call function in which user can enter values in Array

  cout<<"\nEnter the Size of Array 2 :: ";
  cin >> size2;

  int* arr2 = new int[size2];//Creating dynamic Array
  cout<<"\nEntre the Elements of Array 2 :: "<<endl;
  insertElementsInArray(arr2, size2);  // call function in which user can enter values in Array

  cout<<"\nArray 1 is :: \n";
  printArray(arr1,size1); //This function will print values of array1
  cout<<"\n\nArray 2 is :: \n";
  printArray(arr2,size2);//This function will print values of array2
  cout<<"\n\nMarge Array is :: \n\n";
  MargeTwoArrays(arr1,size1,arr2,size2); // calling Marging Array function


  return 0;
}
