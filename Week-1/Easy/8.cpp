#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int unit_place = k%10;
    int i;
    for(i=1;i<11;i++){
        if((unit_place * i)%10 == r || (unit_place * i)%10 ==0){
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}