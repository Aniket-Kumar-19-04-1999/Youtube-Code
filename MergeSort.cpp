//Welcome back today we are going to see merge sort
//Merge Sort is an algorithm of Divide and Conquer. It splits the input list into two halves and then merges the two sorted halves, asking for the two halves.

#include <iostream>
using namespace std;

// display function
void show(int arr[],int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}



//merge function
//Merges two subarrays of arr[]. First subarray is arr[l..m] Second subarray is arr[m+1..r]
void merge(int arr[],int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int l1[n1],r1[n2];
	
	for(int i=0;i<n1;i++)
		l1[i]=arr[l+i];
		
	for(int j=0;j<n2;j++)
		r1[j]=arr[m+j+1];
		
// Initial index of first subarray,second subarray,merged subarray
	int i=0,j=0,k=l;
	
	while(i<n1 && j<n2){
		if(l1[i]<r1[j]){
			arr[k]=l1[i];
			i++;
		}
		else{
			arr[k]=r1[j];
			j++;
		}
		k++;
		
	}
	
// Copy the remaining elements of L1[]
	while(i<n1){
		arr[k]=l1[i];
		i++;
		k++;
	}
	
// Copy the remaining elements of R1[]
	while(j<n2){
		arr[k]=r1[j];
		j++;
		k++;
	}
	
}




//merge Sort function
//here l and r represents left index and  right index of the sub-array of arr to be sorted 
void mergeSort(int arr[],int l,int r){
	int m=0;
	if(l<r){
		m=l+(r-l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);	
	}
	

}
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    //calculating size of array
    int n = sizeof(a) / sizeof(a[0]); 
    //display without sorted
    cout<<"Array before sorted:- "<<endl;
    show(a,n);
    //calling mergesort function
    mergeSort(a,0,n-1);
    //display sorted array
    cout<<"Array after sorted:- "<<endl;
    show(a,n);
    return 0;
}


//Time complexity
//best=average=worst=big O(nlogn)
