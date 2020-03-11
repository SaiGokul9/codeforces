#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	cin>>n;

	while(n--)
	{
		int count=0;
		
		string a,b,c;

		cin>>a>>b>>c;

		for(int i=0;i<a.size();i++)
		{
			if(a[i]==b[i])
			{
               if(a[i]==c[i])   count++;
               else             break;
			}
			else
			{
				if(a[i]==c[i]||b[i]==c[i])   count++;
				else                         break;
			}
		}

		if(count==a.size())   cout<<"YES"<<endl;
		else                   cout<<"NO"<<endl;
	}
}