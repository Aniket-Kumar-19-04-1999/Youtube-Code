#include<iostream>
using namespace std;

//creating another array
void pushZeros(int arr[],int n){
	int arr1[n];
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr1[j]=arr[i];
			j++;
		}
	}
	while(j<n){
		arr1[j]=0;
		j++;
	}
	
	cout<<"Array After Swapping Zeros At The End(creating another array):-\n";
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
}


//without creating another array
void pushZeros1(int arr[],int n){
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[j]=arr[i];
			j++;
		}
	}
	while(j<n){
		arr[j]=0;
		j++;
	}
	
	cout<<"Array After Swapping Zeros At The End(without creating another array):-\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout<<"Array Before Swapping Zeros At The End:-\n";
    for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    pushZeros(arr,n);
    pushZeros1(arr,n);
	return 0;
}
