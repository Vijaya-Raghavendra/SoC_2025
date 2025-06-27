#include <iostream>
using namespace std;

int main(){

    char str1[1000], str2[1000];
    cin>>str1>>str2;
    for(int i=0; i<1000;i++){
        if(str1[i]=='\0' || str2[i]=='\0') break;
        if(str1[i]>='A' && str1[i]<='Z') str1[i] = str1[i] + 32;
        if(str2[i]>='A' && str2[i]<='Z') str2[i] = str2[i] + 32;
        if(str1[i]>str2[i]){ cout<<1<<endl; return 0;}
        else if(str1[i]<str2[i]) {cout<<-1<<endl; return 0;}
    }
    cout<<0<<endl;
    return 0;
}