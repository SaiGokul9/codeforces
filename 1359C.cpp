#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,c,h,t;cin>>T;
	while(T--){
		cin>>h>>c>>t;
		if(c+h>=2*t)cout<<2<<endl;
		else{
			int k=(t-h)/(h+c-2*t);
			if(fabs(1.0*((h+c-2*t)*k+h-t)/(2*k+1))>fabs(1.0*((h+c-2*t)*(k+1)+h-t)/(2*k+3)))k++;
			cout<<k*2+1<<endl; 
		}
	}
} 