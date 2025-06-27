#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> mySet;
    for(char c : s){
        mySet.insert(c);
    }
    
    int sz = mySet.size();
    if(sz%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}