#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w",stdout); 
    int n; cin>>n; 
    set<int> x;
    set<int> y;
    for(int i=1;i<=n;i++)
    {
        int a,b; cin>>a>>b;
        x.insert(a);
        y.insert(b);
    }

    cout<<min(x.size(),y.size());

}   
