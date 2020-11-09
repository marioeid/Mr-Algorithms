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
ll arr[(int)1e6]; // if you are going to use it as the sum
// ll sum[1000000];
int main()
{
    IOS;
    // given array
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // preprocessing

    for (int i=1;i<n;i++)
    {
     arr[i]+=arr[i-1];
    }
    // queries
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        l--;r--;
        if (l!=0){cout<<arr[r]-arr[l-1]<<endl;}
        else {cout<<arr[r]<<endl;}
    }

    return 0;
}
