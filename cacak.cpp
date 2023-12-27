#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin.ignore();
        long long n,k,x;
        cin>>n>>k>>x;
        long long a[n];
        long long sum=0,sum1=0;
        sum=(k*(k+1))/2;
        sum1=(n*(n+1))/2-((n-k)*(n-k+1))/2;

        if(sum1>=x && sum<=x){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
