#include<iostream>
#include <unordered_map>

using namespace std;
void count(int arr[],int n){
	unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
    	 map[arr[i]]++; 
	}
	
	
	int i;
    for (i = 0; i < n; i++) { 
    	
      if (map[arr[i]] == 1) 
      { 
          cout << arr[i] <<" "; 
          map[arr[i]] = -1; 
      } 
      else if(i==n-1){
      	cout<<"-1";
	  }
    } 

	
	
}

int main(){
	int number_of_testcases=1;
	int n=6;
	int arr[n]={1,1,2,2,3,4};	
	count(arr,n);
	return 0;
}
