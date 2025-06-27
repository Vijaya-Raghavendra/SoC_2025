#include<iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=s1.size()-1;
    int j = s2.size()-1;
   
    if(s1==s2){
        cout<<0<<endl;
        return 0;
    }
    int dnum = 0;
    while(s1[i]==s2[j]){
        i = i-1;
        j = j-1;
        dnum++;
    }
    int result = s1.size()+s2.size()-2*dnum;
    cout<<result<<endl;
    return 0;
}