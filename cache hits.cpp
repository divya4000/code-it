#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
cin.tie(NULL);
	int t;
	cin>>t;
	for (int i = 0; i < t; i++){
		
		int n,m,b;
		cin>>n>>b>>m;
		int a[m];
		for(int j=0;j<m;j++){
			cin>>a[j];
		}
		int ans=0,c,d=-1;
		for(int j=0;j<m;j++){
			c=a[j]/b;
			if(c==d){
				continue;
			}
			else{
				d=c;
				ans++;
				
			}}
			
		  cout<<ans<<"\n";
	}
	return 0;
}

    
    

    
