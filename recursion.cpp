#include <iostream>
using namespace std;

void sum(int i,int sum_of_nos){
    
    if(i<1){
        cout<<"The Sum is : "<<sum_of_nos;
    return;
    } 
    else{

        sum_of_nos = sum_of_nos + i;
        sum(i-1,sum_of_nos);
    }
    

}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    sum(n,0);
    return 0;
}
