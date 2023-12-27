#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        int l=n-s.size();
        if(l%2==0){
            cout<<s.size()<<endl;
        }
        else{
            cout<<s.size()-1<<endl;
        }

    }
}
