#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    long long count=0;
    for(int i=0;i<n;i++)
    {
        count = count + a[i]*(i+1) - i;
    }
    cout<<count;
    return 0;
}
