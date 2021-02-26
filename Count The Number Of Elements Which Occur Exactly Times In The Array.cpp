#include<iostream>
#include<algorithm>
#include <unordered_map>
using namespace std;

void countSpecial( int arr[],int n,int k){
	int f=floor(n/k);
	int count=0;
	unordered_map<int,int>mp;
	for (int i = 0; i < n; i++) {
    	 mp[arr[i]]++; 
	}
	for (int i = 0; i < n; i++) { 
    	
      if (mp[arr[i]] == f) 
      { 
      	count++;
        mp[arr[i]] = -1; 
      } 
    } 
    cout<<"Frequency Count is :- "<<count<<endl;;
	
}
int main(){
	int number_of_testcases=1;
	int n=5;
	int k=2;
	int arr[n]={1,4,1,2,4};	
	countSpecial(arr,n,k);
	/*int number_of_testcases;
	cout<<"Number of test Cases\n";
	cin>>number_of_testcases;

	for(int i=0;i<number_of_testcases;i++){
		int n;
		cout<<"N\n";
		cin>>n;
		int k;
		cout<<"k\n";
		cin>>k;
		int arr[n];
		cout<<"Array Element\n";
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}	
		countSpecial(arr,n,k);
	}*/
	
	return 0;
}
