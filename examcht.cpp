#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int i,t,a,b,c,u;
	cin>>t;
	for(int k=1;k<=t;k++)
	{ cin>>a>>b; c=0;
	u=abs(a-b);
	    for(i=1;i<=sqrt(u);i++)
	    { if(u%i==0)
	       { if(u/i==i)
	         { c++; 
	             
	         } 
	         else
	         { c=c+2; }
	    
	        }
	    }
	    cout<<(c)<<endl;
	  
	
	}
}
