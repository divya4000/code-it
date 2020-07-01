#include <iostream>
using namespace std;
int main()
{
    long long int t,a,b,c,d,e,f,sum,l,h;
    cin>>t;
    while(t--){
    	cin>>a>>b;
    	sum=a+b;
    	c=a%10;
    	d=a/10;
    	e=b%10;
    	f=b/10;
    	l=0,h=0;
    	if(f!=0){
        l=(c*10+e)+(d*10+f);
        }
        if(d!=0){
        h=(f*10+d)+(e*10+c);
        }
    	if(d==0&&f==0){
    		cout<<sum<<"\n";
    	}
    	else{
    	cout<<max(sum,max(l,h))<<"\n";
    	}
    	
    }
}
    
    
    
