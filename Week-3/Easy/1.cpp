    #include <iostream>
    using namespace std;
    int main() {
        int t;
        cin>>t;
        for(int k=0;k<t;k++){
            int n,H;
            cin>>n>>H;
            int a[n];
            int max = 0;
            int max_index;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]>max){
                    max=a[i];
                    max_index = i;
                }
            }
            if(H<=max){
                cout<<1<<endl;
                continue;
            }
            int max2 =0;
            int max2_index;
            for(int i=0;i<n;i++){
                if(i==max_index) continue;
                if(a[i]>max2){
                    max2=a[i];
                    max2_index = i;
                }
            }
            int count= H/(max+max2);
            int rem = H%(max+max2);
            if(rem==0){
                cout<<count*2<<endl;
                continue;
            }
            else if(rem<=max2){
                cout<<count*2+1<<endl;;
                continue;
            }
            else if(rem>max2 && rem <= max){
                cout<<count*2+1<<endl;
                continue;
            }
            else{
                cout<<count*2+2<<endl;
                continue;
            }
     
        }
        exit(0);
        
    }