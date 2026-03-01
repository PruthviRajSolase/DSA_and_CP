#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    long long N,f=0;
	    cin>>N;
	    if(N==1){
	        cout<<"no"<<endl;
	    }
	    else{
	    for(int j=1;j<=N/2;j++){
	        if(N%j == 0){
	            f++;
	        }
	    }
	    if(f>1){
	        cout<<"no"<<endl;
	    }
	    else{
	        cout<<"yes"<<endl;
	    }
	}

}

}
