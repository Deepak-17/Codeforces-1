/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<ll, ll>

using namespace std;

int ans[N];
int main()
{
    // freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);
    memset(ans, 0, sizeof(ans));

    k = 1;
    for(i = 2; i <= n; i++)
    {
        if(ans[i]) continue;

        ans[i] = k++;

        for(j = i * 2; j <= n; j += i)
            ans[j] = ans[i];
    }

    for(i = 2; i <= n; i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
