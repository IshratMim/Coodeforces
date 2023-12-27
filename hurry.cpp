#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,count=0;
    cin>>n>>k;
    int a=240-k;
    for(int i=1;i<=n;i++){
        sum+=i*5;
        if(a>=sum){
            count++;
        }
    }
    cout<<count;
}

