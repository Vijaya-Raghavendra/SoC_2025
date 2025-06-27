#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
   
    for(int i=0;i<t;i++){
        int n;
        bool falsth = 0;
        string a,b;
        cin>>n>>a>>b;
        for(int j=0;j<n;j++){
            if(a[j]=='1'){
                if(j-1 >= 0 && b[j-1]=='0'){
                    a[j]='0';
                    b[j-1]='1';
                    continue;
                    
                }
                else if(j+1 < n && b[j+1]=='0'){
                    a[j]='0';
                    b[j+1]='1';
                    continue;
                }
                
                else{
                    cout<<"NO"<<endl;
                    falsth = 1;
                    break;
                }
                

            }
            else continue;
        }
        if(falsth==0){
            cout<<"YES"<<endl;
        }
        else{
            continue;
        }
    }
    return 0;
}