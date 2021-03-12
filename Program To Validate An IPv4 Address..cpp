#include<iostream>
#include<vector>

//(0-255).(0-255).(0-255).(0-255)
using namespace std;
void isValid (string s1){
	int s= s1.length();
	int dots=0;
	for(int i=0;i<s;i++){
		if(s1[i]=='.'){
			dots++;
		}
	}
	if(dots!=3){
		cout<<"IP Address Is Not Valid";
	}else{
		vector<string>s2;
		string temp="";
		for(int i=0;i<s;i++){
			if(s1[i]!='.'){
				temp=temp+s1[i];	
			}else{
				s2.push_back(temp);
				temp="";
			}	
		}
		s2.push_back(temp);
		int count=0;
		int temp1=0;
		for(int i=0;i<4;i++){
			temp1=stoi(s2[i]);
			if(temp1>=0 && temp1<=255){
				count++;
			}
		}
		if(count==4){
			cout<<"IP Address Is Valid";
		}else{
			cout<<"IP Address Is Not Valid";
		}
		
	}
}
int main(){
	//string s1="222.111.111.111";
	string s1="5555..555";
	isValid(s1);
	return 0;
}
