#include <iostream>



using namespace std;
/* For Printing the Elements of an Array */
void printArray(int *arr, int size){
	for (int i = 0; i < size; i++)
	{
		cout<<"Element ["<<i<<" ]" <<arr[i]<<endl;
	}
}

/* ---------------Insertion Sort Function-------------- */
void insertion_Sort(int* arr, int size){
	for (int i = 1; i < size; i++)
	{
		int temp = arr[i];
		int j = i;
		while (j>0 && temp<=arr[j-1])
		{
			arr[j] =  arr[j-1];
			j--;
		}
		arr[j] = temp;

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
	insertion_Sort(arr,size);
	printArray(arr,size);

	return 0;
}
