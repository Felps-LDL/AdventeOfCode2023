// Day 2 - problem 2
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

int pos = 0;
string txt;
long long soma = 0;
bool ok = true;

int red = 0, green = 0, blue = 0;

void verifica()
{
    string num = "";
    num += txt[pos];
    if (txt[pos + 1] >= '0' && txt[pos + 1] <= '9')
    {
        num += txt[pos + 1];
        pos++;
    }

    long long valor = stoll(num);

    if (txt[pos + 2] == 'r' && valor > red) red = valor;
    else if (txt[pos + 2] == 'g' && valor > green) green = valor;
    else if (txt[pos + 2] == 'b' && valor > blue) blue = valor;
}

int main()
{
    while (getline(cin, txt))
    {
        red = 0, green = 0, blue = 0;
        for (pos = 8; pos < txt.size(); pos++)
        {
            if (txt[pos] >= '0' && txt[pos] <= '9') verifica();
        }

        soma += red * blue * green;
        txt.clear();
    }

    cout << soma << endl;

    return 0;
}
