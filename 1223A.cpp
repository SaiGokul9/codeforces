#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p;

	cin>>p;

	while(p--)
	{
		int n;

		cin>>n;

		if((n!=2)&&(n%2==0))  cout<<0<<endl;
		if(n%2!=0)            cout<<1<<endl;
		if(n==2)              cout<<2<<endl;
	}
}