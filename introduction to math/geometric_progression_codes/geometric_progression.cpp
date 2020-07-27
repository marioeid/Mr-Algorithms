
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
using namespace std;
double calc_sn(ll a,ll r,ll n)
{
 return (a*(1-pow(r,n)))/(1-r);
}
double calc_an(ll a,ll r,ll n)
{
     return (a*pow(r,n-1));
}
int main()
{
    IOS;
    double a,r,n;
    cin>>a>>r>>n;
    cout<<(a*pow(r,n-1))<<" calc_an function "<<calc_an(a,r,n)<<endl;
    cout<<(a*(1-pow(r,n)))/(1-r)<<" calc_sn function "<<calc_sn(a,r,n)<<endl;
    return 0;
}
