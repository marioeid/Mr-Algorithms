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
const int sz=1e6+1;
int arr[sz];
int main()
{

    IOS;
    int n;
    cin>>n;
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int l,r;
        cin>>l>>r;
        // val can be any number based on the problem
        int val=1;
        arr[l]+=val;
        arr[r+1]-=val;
    }
    for (int i=1;i<=n;i++)
    {
        arr[i]+=arr[i-1];
    }
    for (int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;




}
