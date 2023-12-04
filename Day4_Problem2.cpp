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

long long soma = 0;
string txt;
int win_cards[10], possible_cards[25];
vector<int> cards(193, 1);

void sum()
{
    for (int i = 0; i < 193; i++) soma += cards[i];
}

int main()
{
    for (int k = 0; k < 193; k++)
    {
        int temp = k + 1;

        for (int i = 0; i < 2; i++) cin >> txt;

        for (int i = 0; i < 10; i++) cin >> win_cards[i];

        cin >> txt;

        for (int i = 0; i < 25; i++) cin >> possible_cards[i];

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 25; j++)
            {
                if (win_cards[i] == possible_cards[j])
                {
                    cards[temp] += cards[k];
                    temp++;
                }
            }
        }
    }

    sum();

    cout << soma << endl;

    return 0;
}
