#include <iostream>
#include<map>
using namespace std;
int roman_to_int(string s){
	map<char,int> mymap{
		{'I',1},
		{'IV',4},
		{'V',5},
		{'IX',9},
		{'X',10},
		{'XL',40},
		{'L',50},
		{'XC',90},
		{'C',100},
		{'CD',400},
		{'D',500},
		{'CM',900},
		{'M',1000},
	};
	int val=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>s[i+1]){
			val+=s[i];
		}
		else{
			val-=s[i];
		}
	}
	return val;
}
int main(){
	string s;
	cout<<"Enter the String:";
	cin>>s;
	cout<<roman_to_int(s);
}
