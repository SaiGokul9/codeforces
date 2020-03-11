#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	while(n--)
	{
		int p,q;

		cin>>p>>q;

		int a[p],sum=0;

		for(int i=0;i<p;i++)
		{
			cin>>a[i];

			sum+=a[i];
		}

		if(q<=sum)   cout<<q<<endl;
		else         cout<<sum<<endl;


	}
}