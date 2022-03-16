#include <iostream>



using namespace std;
/* For Printing the Elements of an Array */
void printArray(int *arr, int size){
	for (int i = 0; i < size; i++)
	{
		cout<<"Element ["<<i<<" ]" <<arr[i]<<endl;
	}
}
/*---------------------------Selection Sort Function----------------*/
void selection_Sort(int* arr, int size){
	int min;
	for (int i = 0; i < size-1; i++)
	{
		min =i;
		for (int j = i+1; j < size; j++)
		{
			/* Finding the index of Minimum Value */
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		/* Swaping the the Elements of array */
		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
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
	
	selection_Sort(arr,size);
	cout<<"Sorted array By Selection sort\n";
	printArray(arr,size);

	return 0;
}
