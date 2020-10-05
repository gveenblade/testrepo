#include<iostream>
using namespace std;
int t=0;
void increase()
{
	t++;
}
bool empty()
{
	return t==0;
}

int main()
{
	while(1){
		int a;
		cin>>a;
		if(a==1) 
		{
			increase();
			cout<<t<<endl;
		}
		else cout<<empty();
	}
	return 0;
}
