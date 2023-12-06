// Day 5 - problem 2
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
#define soma_linhas 198
using namespace std;

ll menor = 300000000000000000;
ll linhas[7], valores[soma_linhas][3];

ll solution(ll num)
{
    ll sol = num, total_linhas = 0, cont = 0;

    while (total_linhas != soma_linhas)
    {
        bool ok = false;
        for (int i = total_linhas; i < total_linhas + linhas[cont]; i++)
        {
            if (sol >= valores[i][1] && sol <= valores[i][1] + valores[i][2])
            {
                sol = sol - valores[i][1] + valores[i][0];
                ok = true;
            }

            if (ok) break;
        }

        total_linhas += linhas[cont];
        cont++;
    }

    return sol;
}

int main()
{
    for (int i = 0; i < 7; i++) 
    {
        cout << "Linha " << i + 1 << ": ";
        cin >> linhas[i];
    }

    for (int i = 0; i < soma_linhas; i++) cin >> valores[i][0] >> valores[i][1] >> valores[i][2];

    for (ll i = 202517468; i <= 1795605557; i++)
    {
        ll temp = solution(i);
        if (temp < menor) menor = temp;
    }

    
    cout << menor << endl;
    return 0;
}
