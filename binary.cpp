#include <iostream>
#include <bitset>
#include <string>
using namespace std;


int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    string s;
    s=bitset<8>(n).to_string();
    cout<<s<<endl;
    string r="00000000";
    int result;
    for(int i=0;i<8;i++){
        if(s[i]==0){
            r[i]=1;
        }
        else
        r[i]=0;
    }
    while(true){
        int i=0;
        if(r=='bitset<8>(i).to_string()'){
            result=i;
            break;
        }
        else
        i++;
    }

    cout<<result;
    


    
    return 0;
}
