#include<iostream>
using namespace std;

int checkSubstring(string s1, string s2){
	int n1=s1.length();
	int n2=s2.length();
	for(int i=0;i<n1-n2;i++){
		int j;
		for(j=0;j<n2;j++){
			if (s1[i + j] != s2[j]){
				break;
			}
		}
		if(j==n2){
			return 1;
		}
	}
	return -1;
}
void repeatedStringMatch(string s1 , string s2){

	string temp="";
	temp=s1;
	int result=1;
	while(temp.length() < s2.length()){
		temp+=s1;
		result++;
	}
	if(checkSubstring(temp,s2)==1){
		cout<<result;
	}else if(checkSubstring(temp+s1,s2)==1){
		cout<<result+1;
	}else{
		cout<<-1;
	}
	
	
	
}


int main(){
	string s1="abcd";
	string s2="cdabcdab";
	repeatedStringMatch(s1,s2);
	return 0;
}
