#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a,a+n);
    
    int j = 0; int ans = 0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[j])
        {
            j++;
            ans++;
        }
    }

    cout<<ans;
}
