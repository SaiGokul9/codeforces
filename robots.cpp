#include<iostream>

using namespace std;

int main()
{
	int n,count1=0,count2=0;

	cin>>n;

	int a[n],b[n],c[n];

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int j=0;j<n;j++)
		cin>>b[j];

     for(int i=0;i<n;i++)
     {
     		if(a[i]!=b[i])
     		{
                if(a[i]==0)   count1++;
                else         count2++;
     		}
     		
     }

      if(count2!=0){

     int p=(count1+1)/count2;

     if(((count1+1)%count2)!=0)  p=p+1;

    
         cout<<p;}
     else
     	 cout<<"-1";



}