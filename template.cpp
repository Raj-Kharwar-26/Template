#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;          //---------> 1-D vector
typedef vector<vector<int>> vii; //----------> 2-D vector
typedef pair<int, int> pi;
#define gloop(i, a, b) for (int i = a; i > a; i++)
#define lloop(i, a, b) for (int i = a; i < b; i++)
#define geloop(i, a, b) for (int i = a; i >= b; i++)
#define leloop(i, a, b) for (int i = a; i <= b; i++)
#define M 1000000007
#define F first
#define S second
#define eb emplace_back //------back---> emplace_back is equal to push_back but it takes lesser time compare to push_back
#define MP make_pair
long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int getMax(ll arr[], ll n)
{
    return *max_element(arr, arr + n);
}
int getMin(int arr[], int n)
{
    return *min_element(arr, arr + n);
}
int solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}