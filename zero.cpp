#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> numeros(n);

    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num != 0) numeros.push_back(num);
        else numeros.pop_back();
    }

    int soma = 0;
    for (int i = 0; i < numeros.size(); i++) {
        soma += numeros[i];
    }

    cout << soma << endl;

    return 0;
}