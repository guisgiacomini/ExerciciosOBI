//Sorvete - OBI 2001

#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, s;

    cin >> p >> s;

    vector<pair <int, int>> intervalos(s);
    for (int i = 0; i < s; i++) {
        cin >> intervalos[i].first >> intervalos[i].second;
    }

    sort(intervalos.begin(), intervalos.end());
    int maior = intervalos[0].second;
    int menor = intervalos[0].first;

    for (int i = 0; i < s ; i++) {

        if (intervalos[i].first <= maior && intervalos[i].second >= maior) {
            maior = intervalos[i].second;
        }
        else if (intervalos[i].first > maior) {
            cout << menor << " " << maior << endl;
            menor = intervalos[i].first;
            maior = intervalos[i].second;
        }

        
    }

    cout << menor << " " << maior << endl;

    return 0; 
}