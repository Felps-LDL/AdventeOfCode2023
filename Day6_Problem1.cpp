// Day 6 - problem 1
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

string temp;
ll tempo[TAM], dist[TAM];

ll chave(ll pos)
{
    ll soma = 0;
    
    for (ll i = 0; i < tempo[pos]; i++)
    {
        if (i *(tempo[pos] - i) > dist[pos]) soma++;
    }

    return soma;
}

ll solution()
{
    ll produto = 1;

    for (int i = 0; i < TAM; i++) produto *= chave(i);

    return produto;
}

int main()
{
    cin >> temp;
    for (int i = 0; i < TAM; i++) cin >> tempo[i];
    cin >> temp;
    for (int i = 0; i < TAM; i++) cin >> dist[i];

    cout << solution() << endl;

    return 0;
}
