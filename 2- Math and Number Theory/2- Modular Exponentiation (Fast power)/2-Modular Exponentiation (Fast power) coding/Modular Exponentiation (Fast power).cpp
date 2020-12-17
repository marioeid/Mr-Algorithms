#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define S second
#define F first
#define MP make_pair
#define endl "\n"
#define PI 3.14159265
using namespace std;
ll M=1e9+7;
const int sz=1e5+10;
const int OO=0x3f3f3f3f;
ll mul(ll a,ll b,ll m)
{
  return ((a%m)*(b%m))%m;
}
int binaryExponentiation(int x,int n)
{
    int result=1;
    while(n>0)
    {
        if(n%2==1){result=result*x;}
        x=x*x;
        n=n/2;
    }
    return result;
}
int modularExponentiation(int x,int n,int m)
{
    int result=1;
    while(n>0)
    {
        if(n%2==1){result=(result*x)%m;}
        x=(x*x)%m;
        n=n/2;
    }
    return result;
}
ll modularExponentiation_lastmodified(ll x,ll n,ll m)
{
    ll result=1;
    while(n>0)
    {
        if(n%2==1){result=mul(result,x,m);}
        x=mul(x,x,m);
        n=n/2;
    }
    return result;
}

int main()
{


    IOS;
    cout<<binaryExponentiation(2,6)<<endl;
    cout<<modularExponentiation(2,6,M)<<endl;
    cout<<modularExponentiation_lastmodified(2,6,M)<<endl;
    return 0;
}
