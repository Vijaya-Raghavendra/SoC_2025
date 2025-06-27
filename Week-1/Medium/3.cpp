#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = 0;

    
    int index = 0;
    for(int i=0;i<n;i++){
        if((a[i]-1)/m >= max){
            max = (a[i]-1)/m;
            index = i;
        }
        else if (a[i]){
            max = 0;
            int min =  LLONG_MAX;
            if(max < min){
                return 0;
            }
        }
    }
    cout<<index+1<<endl;
    return 0;
}