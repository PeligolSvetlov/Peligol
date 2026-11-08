#include <bits/stdc++.h>

using namespace std;

vector<long long> sum(100000, 0);

void sieve(long long n)
{
    for(long long i = 1; i < n; i++)
    {
        for(long long j = i; j <= n; j += i)
        {
            sum[j] += i;
        }
    }
}

void solve()
{
    long long l, r;
    cin >> l >> r;

    long long sol = 0;

    sieve(r);

    for(long long i = l; i <= r; i++)
    {
        if(sum[i] > i * 2)
        {
            sol++;
        }
    }

    cout << sol << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}