#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;

	cin>>n>>k;

	vector<int> P;

	for(int i=1;i<=n;i++)
		{
          if(n%i==0)  P.push_back(i);
		}
    if(k<=P.size())
	cout<<P[k-1];
	else
	cout<<"-1";	
}