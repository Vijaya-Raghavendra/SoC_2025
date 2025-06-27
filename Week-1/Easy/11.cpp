#include<iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,xk,yk,xq,yq;
    set<pair<int,int>> setQ, setK;
    for(int i = 0;i<t;i++){
        cin>>a>>b>>xk>>yk>>xq>>yq;        
        setK = {{xk-a,yk-b},{xk+a,yk-b},{xk-a,yk+b},{xk+a,yk+b},{xk-b,yk-a},{xk+b,yk-a},{xk-b,yk+a},{xk+b,yk+a}};
        setQ = {{xq-a,yq-b},{xq+a,yq-b},{xq-a,yq+b},{xq+a,yq+b},{xq-b,yq-a},{xq+b,yq-a},{xq-b,yq+a},{xq+b,yq+a}};
        int count = 0;
        for(auto p: setQ){
            if(setK.count(p)) count++;
        }
        cout<<count<<endl;
        continue;
    }
    return 0;
}