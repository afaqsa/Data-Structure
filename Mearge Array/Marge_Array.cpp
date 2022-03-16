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
//Marging second Array in first arrray
void MargeTwoArrays(int *array_1, int size1 , int *array_2 , int size2){
    for (int i = 0; i < size2; i++) {
      array_1[size1 + i] = array_2[i];
    }
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
  printArray(arr1 ,size1+size2 );

  return 0;
}
