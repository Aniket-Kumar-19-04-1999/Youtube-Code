//Welcome today we are going to see bubble sort
//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
#include <iostream>
using namespace std;
// display function
void show(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
//bubble sort function
// Here, algorithm compares the first two elements, and swaps . After first pass we get the largest number at the last of the array.
void bubbleSort(int arr[],int size){
	int temp=0;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			//checking whether first element is greater than or not
			if(arr[j]>arr[j+1]){
				//swapping the number using temporary variable
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"Array after sorted:- "<<endl;
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    //calculating size of array
    int n = sizeof(a) / sizeof(a[0]); 
    //display without sorted
    cout<<"Array before sorted:- "<<endl;
    show(a,n);
    //calling bubblesort function
    bubbleSort(a,n);
    return 0;
}


//now coming to time complexity
//Time Complexity
/* worst case=average case= big O(n^2)
	best case=big O(n)*/
