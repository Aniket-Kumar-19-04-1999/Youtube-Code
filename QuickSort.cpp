//QuickSort is an Algorithm for Divide and Conquer. As a pivot, it selects an element and partitions the given array around the chosen pivot.

#include <iostream>
using namespace std;

// display function
void show(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
//This function takes the last element as a pivot, puts the pivot element in the sorted array at its correct location, 
//and puts all the smaller (smaller than pivot) elements to the left of the pivot and all the larger elements to the right of the pivot.

int partition(int arr[],int l,int h){
	// pivot
	int pivot=arr[h];
	// Index of smaller element
	int i=l-1;
	int temp=0;
	int temp1=0;
	for(int j=l;j<=h-1;j++){
		// If current element is smaller than the pivot
		if(arr[j]<=pivot){
			// increment index of smaller element
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp1=arr[i+1];
	arr[i+1]=arr[h];
	arr[h]=temp1;
	
	return(i+1);

}

//arr[] --> Array to be sorted,  
//l --> Starting index,  
//h --> Ending index


void quickSort(int arr[],int l,int h){
	int pi=0;
	if(l<h){
		pi=partition(arr,l,h);
		// Separately sort elements before partition and after partition  
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,h);	
	}
}





int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    //calculating size of array
    int n = sizeof(a) / sizeof(a[0]); 
    cout<<"Array before sorted:- "<<endl;
    show(a,n);
    //calling quicksort function
    quickSort(a,0,n-1);
    cout<<"Array After sorted:- "<<endl;
    show(a,n);
    return 0;
}



//Time Complexity
//best case = average case=big O(nlogn)
//worst case= big O(n^2)
