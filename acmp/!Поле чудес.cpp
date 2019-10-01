#include<iostream>
using namespace std;
int main()
{
	freopen("INPUT.TXT","r",stdin);
	freopen("OUTPUT.TXT","w",stdout);
	long long int n,a[30000+1],swt;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int first = a[1];
	for(int i=2;i<=n;i++)
	{
		swt=0;
		int l=1;
		int r=i;
		if(a[r]==first)
		{
			//cout<<"--------------"<<i<<endl;
			swt=2;
			for(int j=1;j<=r;j++)
			{
				if(j+r-1>=n){
					break;
				}
				else if(a[j]!=a[j+r-1]){
					swt=1;
					//cout<<i<<" "<<swt<<endl;
					break;
				}
			}
		}
		if(swt==2)
		{
			cout<<i-1;
			return 0;
		}
	}
	return 0;
}