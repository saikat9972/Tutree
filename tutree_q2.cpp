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
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int n=str2.size();
    sort(str2.begin(),str2.end());
    for(int i=0;i<str1.size()-n+1;i++)
    {
        string temp=str1.substr(i,n);
        string temp2=temp;
        sort(temp.begin(),temp.end());
        if(temp==str2)
        {
            cout<<"substring '"<<temp<<"' present at index "<<i<<endl;
        }
    }

}