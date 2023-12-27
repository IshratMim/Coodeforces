#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0,sum=0,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        m=max-a[i];
        sum+=m;
    }
    cout<<sum;
    return 0;
}
