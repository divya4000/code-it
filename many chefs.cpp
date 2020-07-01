#include <iostream>
#include <string>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
    	ll c=0;
    string s;
    cin>>s;
    n=s.length();
    char a[4]={'C','H','E','F'};
    for(ll i=n-1;i>=0;i--){
    	if((s[i]==a[3]||s[i]=='?')&&(s[i-1]==a[2]
    		||s[i-1]=='?')&&(s[i-2]=='?'||s[i-2]==a[1])
    		&&(s[i-3]=='?'||s[i-3]==a[0])){
    		s[i]=a[3];
    		s[i-1]=a[2];
    		s[i-2]=a[1];
    		s[i-3]=a[0];
    		i=i-3;
    		}
    		
    	else if(s[i]=='?'){
    		s[i]='A';
    	}}
    cout<<s<<"\n";
    
    }
    return 0;
}
    
    
    

    
