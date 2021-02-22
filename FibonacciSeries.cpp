#include<iostream>
using namespace std;

void fiterative(int number){
	int a=0;
	int b=1;
	if(number==1){
		cout<<a;
	}
	else if(number==2){
		cout<<a<<" "<<b;
	}
	else if(number>2){
		cout<<a<<" "<<b<<" ";
		int c=0;
		for(int i=3;i<=number;i++){
			 c = a + b;
		     a = b;
		     b = c;
		     cout<<c<<" ";
		}
	}
	else if(number<1){
		cout<<"Enter valid number to generate fibonacci series";
	}
}


int frecursive(int number) {
   if(number<1){
   	return -1;
   }
   else if(number==1) {
      return(0);
   }else if(number==2){
   	return (1);
   }else {
      return(frecursive(number-1)+frecursive(number-2));
   }
}


int main(){
	int number=8;
	cout<<"Welcome to print fibonacci series.."<<endl<<endl;
	
	cout<<"Using Iterative Method :- "<<endl;
	fiterative(number);
	
	
	cout<<endl<<"Using Recursive Method :- "<<endl;
	if(frecursive(number)==-1){
		cout<<"Enter valid number to generate fibonacci series";
	}else{
		for(int i=1;i<=number;i++){
		cout<<frecursive(i)<<" ";
		}	
	}
	
	return 0;
}
