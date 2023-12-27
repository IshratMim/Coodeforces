#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,final;
    int count=-1;
    cin>>a>>b>>c;
    final=a+b;
    sort(final.begin(),final.end());
    sort(c.begin(),c.end());
    for(int i=0;i<final.size();i++){
    if(final[i]!=c[i]){
       count++;
    }
    }
    if(count==-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
