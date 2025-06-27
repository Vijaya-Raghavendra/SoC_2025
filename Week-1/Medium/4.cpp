#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    cin>>num;
    int count = 0;
    while(num.size()>1){
        long long sum = 0;
        
        for(int i=0;i<num.size();i++){
            int digit = num[i] - '0';
            sum += digit;
        }
        num = to_string(sum);
        count++;
    }
    cout<<count<<endl;
    
    return 0;

}