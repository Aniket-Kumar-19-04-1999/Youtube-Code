
#include <iostream> 
#include <math.h> 
using namespace std; 
 
int main() 
{ 
	int n=4;
    int n1=(5*n*n + 4);
    int n2=(5*n*n -4);
    int s1=sqrt(n1);
    int s2=sqrt(n2);
    s1=s1*s1;
    s2=s2*s2;
    if(n1==s1 || n2==s2){
    	cout << n << " is a Fibonacci Number \n";
	}else{
		cout << n << " is a not Fibonacci Number \n" ;
	}
  return 0; 
} 
