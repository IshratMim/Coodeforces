#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        set<int>s;
        s.insert(s1[0]);
        s.insert(s1[1]);
        s.insert(s2[0]);
        s.insert(s2[1]);
        cout<<s.size()-1<<endl;
    }
    return 0;
}
