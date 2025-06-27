#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    set<char> mySet;
    string s;    
    cin>>s;
    if(s[1]=='}'){
        cout<<0<<endl;
        return 0;
    }
    if(s[2]=='}'){
        cout<<1<<endl;
        return 0;
    }
    else{
        mySet.insert(s[1]);
        while(s[1]!='}'){
            cin>>s;
            mySet.insert(s[0]);
        }
       
    }
    int sz = mySet.size();
    cout<<sz<<endl;
    return 0;
}