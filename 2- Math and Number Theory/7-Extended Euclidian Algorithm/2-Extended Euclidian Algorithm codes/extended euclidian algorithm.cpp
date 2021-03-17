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

int extendedEuclid_recursive(int a, int b, int& x, int& y) {
    if (b==0) {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=extendedEuclid_recursive(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}

int extendedEuclid_iterative(int a, int b, int& x_prev, int& y_prev)
{
    x_prev=1,y_prev=0;
    int x=0,y=1;
    while (b) {
        int q=a/b;
        tie(x,x_prev)=make_tuple(x_prev-q*x,x);
        tie(y,y_prev)=make_tuple(y_prev-q*y,y);
        tie(a,b)=make_tuple(b,a%b);

    }

    return a;
}

int main()
{
    //myf.open("file.txt");
    //freopen("task.in", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int a,b;
    cin>>a>>b;
    int x,y;
    cout<<extendedEuclid_recursive(a,b,x,y)<<" ";
    cout<<x<<" "<<y<<endl;

    cout<<extendedEuclid_iterative(a,b,x,y)<<" ";
    cout<<x<<" "<<y<<endl;

    return 0;

}
