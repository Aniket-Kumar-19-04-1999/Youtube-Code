#include<iostream>
using namespace std;


//using iterative function
void factorialIterative (int number){
	int result=1;
	for(int i=1;i<=number;i++){
		result=result*i;
	}	
	cout<<" Using Iterative method:- "<<result<<endl;
}

//using recursive function
int factorialRecursive (int number){
	if(number==0){
		return 1;
	}
	else{
		return number*factorialRecursive(number-1);
	}
	
}



int main(){
	int number=5;
	cout<<"Welcome to calculate the factorial"<<endl<<endl;
	cout<<" "<<number<<" factorial is:-"<<endl;
	factorialIterative(number);
	cout<<" Using Recursive method:- "<<factorialRecursive(number);
}
