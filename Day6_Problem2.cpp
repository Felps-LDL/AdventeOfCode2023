// Day 6 - problem 2
// Felipe Lages de Lima
// Felps-LDL
// menor semente = 202517468
// maior semente = 1795605557
#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 60000
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()
#define ll long long
#define TAM 4
using namespace std;

ll solution()
{
    ll soma = 0;
    
    for (ll i = 0; i < 49787980; i++)
    {
        if (i *(49787980 - i) > 298118510661181) soma++;
    }

    return soma;
}

int main()
{
    cout << solution() << endl;

    return 0;
}
