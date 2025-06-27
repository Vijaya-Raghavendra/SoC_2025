#include<iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    string interview = "";
    string filler = "ogo";
    int index = 0;
    while(index < n){
        size_t found = s.find(filler,index);
        if(found != string::npos){
            for(int i=index; i<found;i++){
                interview = interview + s[i];
            }
            index = found + 3;
            while(s[index]=='g' && s[index+1]=='o'){
                index += 2;
            }
            interview += "***";
            continue;
        }
        else{
            for(int i=index; i < n; i++){
                interview = interview + s[i];
            }
            break;
        }
    }

    cout<<interview<<endl;
    return 0;
}