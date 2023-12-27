#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt+=a[i];
        }
        if(cnt>n){
            if(cnt==n){
                cout<<0<<endl;
            }
            else{
                cout<<cnt-n<<endl;
            }

        }
        else{
            cout<<1<<endl;
        }

    }
}
