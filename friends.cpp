#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,cnt=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0){
            cout<<-1<<endl;
        }
        else{
            sum/=n;
            for(int i=0;i<n;i++){
                if(a[i]>sum){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }

    }
}
