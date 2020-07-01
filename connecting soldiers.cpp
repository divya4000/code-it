#include <iostream>
using namespace std;
typedef long long int ll;
int rec(ll n){
	if(n==1){
		return 2;
	}
	if(n==2){
		return 5;
	}
	else{
		return (n+1)+rec((n-1)/2)+rec(n/2);
	}
}
int main()
{
    ll n,m,t;
    cin>>t;
    while(t--){
    	cin>>n>>m;
    	ll max,min;
    	max=((n+2)*(n+1))/2-1;
    	min=rec(n);
    	if(m<min){
    		cout<<"-1\n";
    		}
    		else if(m>=min&&m<=max){
    			cout<<"0\n";
    		}
    		else if(m>max){
    			cout<<m-max<<"\n";
    		}
    }
    return 0;
}
    
    
    
