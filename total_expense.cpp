#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T-->0){
	    double q,p,t,s,d;
	    cin>>q>>p;
	    s=q*p;
	    if(q>1000){
	        d=(10*s)/100;
	        s-=d;
	    }
	    cout<<fixed<<setprecision(6)<<endl;
	    cout<<s<<endl;
	}
	return 0;
}
