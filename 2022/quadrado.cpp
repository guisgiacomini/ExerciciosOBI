#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num, row, col;
    int falta = (1 + (n * n)) * n * n * 1/2 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            cin >> num;
            if (num == 0)
            {
                row = i+1;
                col = j+1;
            }
            falta -= num;
        }
    }

    cout << falta << endl << row << endl << col << endl;

    return 0;
}