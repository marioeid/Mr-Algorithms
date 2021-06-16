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
const int sz=1e6+10;
const int OO=0x3f3f3f3f;
bool composite[sz+1];
vector<int>prime;
void sieve()
{
    composite[0]=composite[1]=1;
    for (int i=2;i*i<=sz;i++)
    {
         if (!composite[i])
         {
             for (int j=i*i;j<=sz;j+=i)
             {
                 composite[j]=1;
             }
         }
    }
}
void linear_sieve()
{
    composite[0]=composite[1]=1;
    for (int i=2; i<=sz; ++i)
    {
        if (!composite[i])
        {
            prime.push_back(i);
        }
        for (int j=0; j<(int)prime.size()&&i*prime[j]<=sz; ++j)
        {
            composite[i * prime[j]] = 1;
            if (i%prime[j]==0) break;

        }
    }
}
int main()
{
    //myf.open("file.txt");
    //freopen("task.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    sieve();
    for (int i=0;i<100;i++)
    {
        if (!composite[i]){cout<<i<<endl;}
    }




    return 0;
}
