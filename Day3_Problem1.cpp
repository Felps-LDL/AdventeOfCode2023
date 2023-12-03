// Day 3 - problem 1
// Felipe Lages de Lima
// Felps-LDL

#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define MAXN 10100
#define INTMAX 10000000000
#define pii pair<int, int> 
#define delta 0.0000001
#define ALL(x) x.begin(), x.end()

using namespace std;

long long i = 0, j = 0;
string texto[MAXN];
long long cont = 140, soma = 0;

bool numero(char x)
{
    if (x >= '0' && x <= '9') return true;
    return false;
}

bool verificar(int linha, int coluna)
{
    if (linha != 0 && coluna != 0)
    {
        if (!numero(texto[linha - 1][coluna - 1]) && texto[linha - 1][coluna - 1] != '.') return true;
    }

    if (linha != 0)
    {
        if (!numero(texto[linha - 1][coluna]) && texto[linha - 1][coluna] != '.') return true;

        if (coluna != texto[linha - 1].size() - 1)
        {
            if (!numero(texto[linha - 1][coluna + 1]) && texto[linha - 1][coluna + 1] != '.') return true;
        }
    }

    if (coluna != 0)
    {
        if (!numero(texto[linha][coluna - 1]) && texto[linha][coluna - 1] != '.') return true;
    }

    if (coluna != texto[linha].size() - 1)
    {
        if (!numero(texto[linha][coluna + 1]) && texto[linha][coluna + 1] != '.') return true;
    }

    if (linha != cont - 1)
    {   
        if (coluna != 0)
        {
            if (!numero(texto[linha + 1][coluna - 1]) && texto[linha + 1][coluna - 1] != '.') return true;
        }
        if (!numero(texto[linha + 1][coluna]) && texto[linha + 1][coluna] != '.') return true;

        if (coluna != texto[linha].size() - 1)
        {
            if (!numero(texto[linha + 1][coluna + 1]) && texto[linha + 1][coluna + 1] != '.') return true;
        }
    }
    return false;
}

int main()
{
    //140
    for (i = 0; i < 140; i++)
    {
        cin >> texto[i];
    }
    /*while(cin >> texto[cont])
    {
        cont++;
    }*/

    for (i = 0; i < cont; i++)
    {
        for (j = 0; j < texto[i].size(); j++)
        {
            if (numero(texto[i][j]))
            {
                bool ok = false;
                int pos = j;

                while(numero(texto[i][pos]))
                {
                    ok = verificar(i, pos);
                    if (ok) break;

                    pos++;
                }

                if (ok)
                {
                    string num = "";

                    while(numero(texto[i][j]))
                    {
                        num += texto[i][j];
                        j++;
                    }

                    soma += stoll(num);
                }
                else
                {
                    j = pos;
                }
            }
        }
    }

    cout << soma << endl;

    return 0;
}
