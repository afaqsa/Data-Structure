#include <iostream>



using namespace std;
/* For Printing the Elements of an Array */
void printArray(int *arr, int size){
	for (int i = 0; i < size; i++)
	{
		cout<<"Element ["<<i<<" ]" <<arr[i]<<endl;
	}
}

/*------------ Bubble Sort-------------*/
void bubble_Sort(int *arr, int size){
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			/* Finding the smallest value and swaping */
			if(arr[j]>arr[j+1]) {
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


/*------------Main Function--------------------*/
int main(int argc, char* argv[])
{
	/* declaring Varaiable */
	int size=0;

	cout<<"Enter the size of array ::  ";
	cin >> size;
    int* arr = new int[size];
    cout << "Enter the" <<size<< " Elements of Array"<<endl;
    for(int i=0; i<size; i++){
        cout<<"Element of Array [ "<<i <<" ] :: ";
        cin >> arr[i];
    }
	cout<<"Unsorted array is :: "<<endl;
	printArray(arr,size);
	
	cout<<"\nSorted array is :: \n";
	bubble_Sort(arr, size);
	printArray(arr,size);
	
	
	return 0;
}
