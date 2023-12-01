// Day 1 - problem part 2
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
string txt, num = "";
bool primeiro, segundo;

void verifica(char digito)
{
    if (primeiro && segundo) num[1] = digito;
    else 
    {
        if (primeiro) segundo = true;
        else primeiro = true;
        num += digito; 
    }
}

void numero()
{
    if (txt[pos] >= '0' && txt[pos] <= '9') 
    {
        verifica(txt[pos]);
        return;
    }

    if (txt[pos] == 'o')
    {
        if (txt.substr(pos, 3) == "one") verifica('1');
    }
    else if (txt[pos] == 't')
    {
        if (txt.substr(pos, 3) == "two") verifica('2');
        else if (txt.substr(pos, 5) == "three") verifica('3');
    }
    else if (txt[pos] == 'f')
    {
        if (txt.substr(pos, 4) == "four") verifica('4');
        else if (txt.substr(pos, 4) == "five") verifica('5');
    }
    else if (txt[pos] == 's')
    {
        if (txt.substr(pos, 3) == "six") verifica('6');
        else if (txt.substr(pos, 5) == "seven") verifica('7');
    }
    else if (txt[pos] == 'e')
    {
        if (txt.substr(pos, 5) == "eight") verifica('8');
    }
    else if (txt[pos] == 'n')
    {
        if (txt.substr(pos, 4) == "nine") verifica('9');
    }
}

int main()
{
    long long soma = 0;
    
    while (cin >> txt)
    {
        primeiro = false, segundo = false;
        num = "";
        pos = 0;

        for (char digito : txt)
        {
            numero();
            pos++;
        }

        if (!segundo) num += num[0];

        soma += stoll(num);
    }

    cout << soma << endl;
}
