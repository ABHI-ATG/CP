#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin >> t;
	while(t--){
	    int a,b;cin >> a >> b;
	    if(a<b)swap(a,b);
	    int msb=0;
	    for(int i=0;i<30;i++){
	        if(a&(1<<i))msb=i;
	    }
	    int ans=0;
	    for(int i=0;i<msb;i++){
	        int x=(a&(1<<i));
	        int y=(b&(1<<i));
	        if(x>=1 && y==0){
	            ans|=(1<<i);
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
