#include<iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            continue;
        }
        else{
            cout<<s<<endl;
            exit(0);
            
        }
    }
    if(s[0]>='A' && s[0]<='Z'){
        s[0] += 32;
    }
    else{
        s[0]-=32;
    }
    for(int i=1;i<s.size();i++){
        s[i]+=32;
    }
    
    cout<<s<<endl;

    exit(0);
}