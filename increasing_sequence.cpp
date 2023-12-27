#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long b=0;
        if(a[0]==1){
            b=2;
        }
        else
            b=1;
        for(int i=1;i<n;i++){
            if(a[i]==b+1){
                b+=2;
            }
            else
                b++;

        }
cout<<b<<endl;

    }
}
