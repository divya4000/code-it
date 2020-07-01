#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long int ll;
struct f{
	int roll;
	int sb;
	int toys;
};
bool comp(struct f g, struct f h){
	if(g.toys!=h.toys){
	return g.toys<h.toys;
	}
	if(g.toys==h.toys){
		if(g.sb!=h.sb){
			return g.sb>h.sb;
		}
		else{
			return g.roll>h.roll;
		}
	}
	
}
int main()
{
	ll n,m,mi;
	cin>>n;
	struct f v[n];
	vector <ll> d[n];
	for(ll i=0;i<n;i++){
		v[i].roll=i+1;
		cin>>v[i].sb>>v[i].toys;
	}
	sort(v,v+n,comp);
	for(ll i=0;i<n;i++){
		cout<<v[i].roll<<" ";
		}
    return 0;
}
    
    
    
