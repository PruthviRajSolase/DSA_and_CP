#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int A[1000],d=0;
	    for(int j=0;j<N;j++){
	        cin>>A[j];
	    }
	    for(int k=N-1;k>=0;k--){
	        if(A[k]!=0){
	            cout<<k<<endl;
	            break;
	        }
	    }
	    
	    
	}

}
