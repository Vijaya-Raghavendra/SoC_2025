    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int i;
        for(i=0;i<25;i++){
            int num;
            cin>>num;
            if(num==0){
                continue;
            }
            else{
                break;
            }
        }
        int row = (i/5)+1;
        int col = (i%5) + 1;
        int moves = abs(3-row)+abs(3-col);
        cout<<moves<<endl;
        return 0;
    }