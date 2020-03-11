#include<iostream>

using namespace std;

int main()
{
	int n;

	cin>>n;

	while(n--)
	{
		int p,q;

		cin>>p>>q;

		if(p%q==0)   cout<<"YES"<<endl;
		else         cout<<"NO"<<endl;
	}

	return 0;
}