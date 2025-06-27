#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    if(n<26){
        cout<<"NO"<<endl;
        return 0;
    }
    set<char> mySet;
    for(char c : s){
        if(c>='A' && c<='Z') c= c+32;
        mySet.insert(c);
    }
    int sz = mySet.size();
    if(sz>=26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}