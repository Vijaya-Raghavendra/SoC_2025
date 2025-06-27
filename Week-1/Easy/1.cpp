    #include <iostream>
    #include <string>
    using namespace std;
    int main() {
        // Write C++ code here
        int n;
        cin>>n;
        int X=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            string sub = s.substr(1,1);
            if(sub=="+"){
                X++;
            }
            else if(sub=="-"){
                X--;
            }
            else{
                continue;
            }
        }
        cout<<X<<endl;
     
        return 0;
    }