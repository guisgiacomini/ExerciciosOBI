#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    int t = 0;
    int total = 0;
    int fim = 0;

    for (int i = 0; i < n; i++) {
        cin >> t;

        if (t >= fim) total += 10;
        else total += t + 10 - fim;

        fim = t+10;

    }

    cout << total << endl;
    return 0;
}