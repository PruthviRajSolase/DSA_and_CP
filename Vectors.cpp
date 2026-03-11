#include <iostream>
#include <vector>
using namespace std;

int main()
{   //Basic Vectors 
    vector<int> v = {2,5,8,10,71,84};

    cout<<v[3]<<endl;
    v.push_back(10);
    cout<<"After pushing 10 : ";
    cout<<v[0];
    cout<<" "<<v[6]<<endl;

    // Iterations 
    // The pointers in vectors which gives access to memory location

    vector<int>::iterator it = v.begin();
    cout<<*it<<endl;

    it++;
    cout<<*it<<endl;

    it=it+2;
    cout<<*it<<endl;

    cout<<"Accessing all the elements with basic using index : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"Accessing all the elements with its address using iterations: ";
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" "<<endl;
    }

    //popping an element removing basically

    v.pop_back();
    cout<<v[5];


    return 0;
}
