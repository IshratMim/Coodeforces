#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0,mx=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt++;
                mx=max(mx,cnt);

            }
            else{
                cnt=0;
            }
        }
        cout<<mx<<endl;
    }
}
