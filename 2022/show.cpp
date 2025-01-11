#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n, m;
    cin >> a >> n >> m;
    int continuo = 0;
    int assento;
    int fila = -1;
    for (int i = n; i > 0; i--)
    {
        continuo = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> assento;
            if (assento == 1)
            {
                continuo = 0;
            }
            else 
            { 
                continuo++;
                if (continuo >= a)
                {
                    fila = i;
                }
                
            }
        }
        
        
    }

    cout << fila << endl;
    return 0;
}