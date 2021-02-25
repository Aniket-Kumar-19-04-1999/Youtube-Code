#include<iostream>
#include<algorithm>
using namespace std;
void checkConsecutive(int arr[],int n){
	sort(arr,arr+n);
	int count=0;
	cout<<"Sorted Array:- \n";
	for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		if(arr[i+1]==arr[i]+1){
			count++;
		}
	}
	
	if(count==n-1){
		cout<<"Array elements are consecutive";
	}else{
		cout<<"Array elements are not consecutive";
	}
}
int main(){
	int arr[]= {83, 78, 80, 81, 79, 2}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:- \n";
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
	cout<<endl;
	checkConsecutive(arr,n);
	return 0;
}
