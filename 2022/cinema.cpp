#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    int total = 0;
    for (int i = 0; i < 2; i++)
    {
        cin >> x;
        if (x < 18)
        {
            total += 15;
        }
        else if (x < 60) total += 30;
        else total += 20;
    }

    cout << total << endl;
    return 0;

}