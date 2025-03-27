//Telemarketing - OBI 2007
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l; cin >> n >> l;
    vector <int> contadores(n, 0);
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > atendentes; //first guarda tempo, second guarda identificacao
    for (int i = 0; i < n; i++) {
        atendentes.push({0, i+1});
    }
    for (int i = 0; i < l; i++) {
        int chamada; cin >> chamada;
        pair <int,int> proximo = atendentes.top();
        atendentes.pop();
        atendentes.push({chamada + proximo.first, proximo.second});
        contadores[proximo.second-1]++;
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << contadores[i] << endl;
    }

    return 0;

}