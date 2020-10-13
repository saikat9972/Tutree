// Created by ...Saikat
#include <bits/stdc++.h>
using namespace std;
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define fr(i,n) for(int i=0;i<(n);++i)
#define frI(i,a,n) for(int i=a;i<=(n);++i)
#define frD(i,a,n) for(int i=a;i>=(n);--i)
using namespace std;
using ld = long double;
#define len(x) ((int)x.length())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
const int MOD = 1e9+7,inf = 1e9 , N = 2e5 + 1;
#define endl '\n'
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n=7;
    fr(i,n*2)
    {
        int k=i;
        if(i>=7)
        {
            k=2*n-1-i;
        }
        for(int z=1;z<=n;z++)
        {
            if(z>k)
                cout<<z;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}