#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,m=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==k){
                m=-1;
                break;
            }

        }
        if(m==-1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
