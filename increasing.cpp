#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        set<int>s;
        int x;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        if(s.size()==n){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
