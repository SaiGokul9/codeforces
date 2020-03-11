#include<iostream>

using namespace std;

int max(int a,int b)
{
	if(a>b)  return a;
	else     return b;
}

int main()
{
	int n;

	cin>>n;

	for(int i=0;i<n;i++)
	{
		int a,b,x,y;
		
		cin>>a>>b>>x>>y;

		int p=a*(b-y-1),q=a*y,r=b*x,s=b*(a-x-1);


		cout<<max(max(p,q),max(r,s))<<endl;
	}
}