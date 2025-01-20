// Expressões - OBI 2011
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        stack<char> cadeia;
        string entrada;
        cin >> entrada;

        map<char, char> symbols = {{'}', '{'}, {')', '('}, {']', '['}};

        bool valido = true;
        for (int j = 0; j < entrada.length(); j++)
        {
            if (cadeia.empty())
            {
                if (entrada[j] == '}' || entrada[j] == ')' || entrada[j] == ']')
                {
                    valido = false;
                }
                else
                {
                    cadeia.push(entrada[j]);
                }
            }

            else
            {
                if (entrada[j] == '}' || entrada[j] == ')' || entrada[j] == ']')
                {
                    if (cadeia.top() != symbols[entrada[j]])
                    {
                        valido = false;
                    }
                    else
                    {
                        cadeia.pop();
                    }
                }
                else
                {
                    cadeia.push(entrada[j]);
                }
            }
        }

        if (cadeia.empty() && valido)
        {
            cout << 'S' << endl;
        }
        else
        {
            cout << 'N' << endl;
        }
    }

    return 0;
}