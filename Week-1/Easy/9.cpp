#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    for(int i=0;i<t;i++){        
        cin>>a>>b>>c;
        if((b-a)!=(c-b)){
            if((2*b-c)% a ==0 && (2*b-c)/a >=1){
                cout<<"YES"<<endl;
                continue;
            }
            else if(((a+c)/2)%b==0 && ((a+c)/2)/b>=1 && (a+c)%2==0){
                cout<<"YES"<<endl;
                continue;
            }
            else if((2*b-a)% c ==0 && (2*b-a)/c >=1){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        else{
            cout<<"YES"<<endl;
            continue;
        }
    }
}