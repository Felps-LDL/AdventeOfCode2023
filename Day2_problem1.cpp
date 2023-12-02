// Day 2 - problem 1
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

int red = 12, green = 13, blue = 14;

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

    if (txt[pos + 2] == 'r' && valor > red) ok = false;
    else if (txt[pos + 2] == 'g' && valor > green) ok = false;
    else if (txt[pos + 2] == 'b' && valor > blue) ok = false;
}

int main()
{
    while (getline(cin, txt))
    {
        ok = true;
        for (pos = 8; pos < txt.size(); pos++)
        {
            if (txt[pos] >= '0' && txt[pos] <= '9') verifica();
        }

        if (ok)
        {
            string num = "";
            num += txt[5];
            if (txt[6] >= '0' && txt[6] <= '9') num += txt[6];
            soma += stoll(num);
        }
        txt.clear();
    }

    cout << soma << endl;

    return 0;
}
