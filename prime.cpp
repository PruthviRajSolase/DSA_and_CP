#include <iostream>
using namespace std;

int isprime(int num){
    
    int result=0;
    

    if(num==1){
        result=1;
    }
    else{
    for(int i=2;i<=num/2;i++){

        if(num%i == 0){
         result=1;
        }
        
    }
}
    return result;

}

int main()
{
    int num1,num2;
    cout<<"Enter the range"<<endl;
    cin>>num1>>num2;

    
    

    for(int i=num1;i<=num2;i++){

        if(isprime(i)==0){
            cout<<i<<endl;
            
        }

    }



    

    return 0;
}
