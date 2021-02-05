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
const int sz=1e3+10;
const int OO=0x3f3f3f3f;
vector<int>v;
int main()
{
    //myf.open("file.txt");
    //freopen("task.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    for (int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            n/=i;
            v.push_back(i);
        }
    }
    if (n!=1)
    {
        v.push_back(n);
    }
    for (int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
