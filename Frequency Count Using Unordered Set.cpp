#include <iostream> 
#include <unordered_map>
using namespace std; 
  

void countFreq(int arr[], int n) 
{ 
    unordered_map<int, int> map; 
    
    for (int i = 0; i < n; i++) {
    	 map[arr[i]]++; 
	}
       
    cout<<"Number"<<" "<<"Frequency"<<endl;    
    for (int i = 0; i < n; i++) { 
    	
      if (map[arr[i]] != -1) 
      { 
          cout << arr[i] << "\t" << map[arr[i]] << endl; 
          map[arr[i]] = -1; 
      } 
    } 
} 
  
int main() 
{ 
    int arr[] = { 8, 10, 20, 20, 10, 10, 20, 5, 20, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    countFreq(arr, n); 
    return 0; 
} 
