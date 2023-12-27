#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n,x;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            x=a[i+1]-a[i];
            v.push_back(x);

        }
        sort(v.begin(),v.end());
            cout<<v[0]<<endl;

    }
}
