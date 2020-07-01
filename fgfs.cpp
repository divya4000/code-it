#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
struct f{
	int a;
	int d;
	int p;
};
bool rate(struct f g,struct f h)
{
	if(g.p!=h.p){
	return g.p<h.p;
	}
	return g.a>h.a;
}
int main()
{
	ios_base::sync_with_stdio(false); 
cin.tie(NULL);
	ll t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		struct f u[n];
		for(ll i=0;i<n;i++){
			cin>>u[i].a>>u[i].d>>u[i].p;
		}
		sort(u,u+n,rate);
		ll sum=0,j=0;
		if(n>0){
			sum=1;
		}
		for(ll i=0;i<n;i++){
			if(u[i].p!=u[j].p){
				j=i;
				sum++;
				continue;
			}
		  if(u[i].d<=u[j].a){
  			j=i;
  			sum++;
  			continue;
  		}
		}
		cout<<sum<<"\n";
		
	}
    return 0;
}
    
    
    
    