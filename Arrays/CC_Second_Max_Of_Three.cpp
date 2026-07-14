#include <bits/stdc++.h>
using namespace std;
int secondlargest(int a,int b,int c){
    if((a>b||a>c)&&(a<c||a<b)){
        return a;
    }
    else if((b>a||b>c)&&(b<c||b<a)){
        return b;
    }
    else{
        return c;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    int y;
	    int z;
	    cin>>x>>y>>z;
	    cout<<secondlargest(x,y,z)<<endl;
	    
	}
	return 0;

}
