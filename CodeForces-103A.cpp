#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	long long int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long int t;
		cin>>t;
		if(t>1) sum+=i*(t-1)+1;
		else sum+=t;
	}
	cout<<sum;
	return 0;
}