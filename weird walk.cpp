#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,n,ri,i;
    cin>>t;
    while(t--){
    	cin>>n;
    	ll a[n],b[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];
    	}
    	for(i=0;i<n;i++){
    		cin>>b[i];
    	}
    	ll sum=0,s=0,si=0;
    	for(i=0;i<n;i++){
    		si=si+a[i];
    		s=s+b[i];
    		if(a[i]==b[i]&&si==s){
    			sum+=a[i];
    		}
    	}
    	cout<<sum<<"\n";
    
    }
    return 0;
}
    
    
    

    
