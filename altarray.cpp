#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n],d[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		d[n-1]=1;
		for(ll i=n-2;i>=0;i--){
			if(a[i]*a[i+1]<0){
				d[i]=d[i+1]+1;
			}
			else{
				d[i]=1;
			}
		}
		for(ll i=0;i<n;i++){
			cout<<d[i]<<" ";
			}
	cout<<"\n";
	}
    return 0;
}
    
    
    
    