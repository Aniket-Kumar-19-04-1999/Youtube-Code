#include<iostream>
using namespace std;
void calculate( string s1 , string s2){
	int n1=stoi(s1);
	int n2=stoi(s2);
	int result=n1*n2;
	cout<<"The multiplication of the two number i.e  "<<s1<<" and "<<s2<<" is:- "<<result;
}
int main(){
	string S1="33";
	string S2="44";
	calculate(S1,S2);
	return 0;
}
