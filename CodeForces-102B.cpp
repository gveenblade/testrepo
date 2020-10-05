#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string s, c = "";
stringstream ss;
int SumOfDigits(string s){
	int temp = 0;
	for(int i = 0; i < s.size(); i++)
	{
		temp += s[i] - 48;
	}
	ss<<temp;
	ss>>c;
	s = c;
	return temp;
}
string intToString(string s){
	ss<<SumOfDigits(s);
	ss>>c;
	s = c;
	return s;
}
int stringToInt(string s){
	ss<<s;
	int t;
	ss>>t;
	return t;
}
int main()
{
	int cnt =0;
	cin>>s;
	cout<<SumOfDigits(s)<<endl;
	cout<<stringToInt(s)<<endl;
	cout<<intToString(s)<<endl;
	return 0;
}
