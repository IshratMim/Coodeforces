#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a[5];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int m1=max(a[0],a[1]);
        int m2=max(a[2],a[3]);
        sort(a,a+4);
        if((m1==a[2] && m2==a[3]) || (m1==a[3] && m2==a[2])){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
