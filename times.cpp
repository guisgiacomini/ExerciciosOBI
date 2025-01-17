#include <bits/stdc++.h>

using namespace std;

bool compara_habilidade(pair <string, int> a, pair <string, int> b) {
    return a.second > b.second;
}
int main() {
    int n, t;

    cin >> n >> t;

    vector<pair<string, int>> alunos(n);
    for (int i = 0; i < n; i++) {
        cin >> alunos[i].first >> alunos[i].second;
    }   

    sort(alunos.begin(), alunos.end(), compara_habilidade);


    vector<vector<pair<string, int>>> times(t);

    for (int i = 0; i < n; i++) {
        times[i % t].push_back(alunos[i]);
    }

    for (int i = 0; i < t; i++) {
        cout << "Time " << i + 1 <<  endl;
        sort(times[i].begin(), times[i].end());
        for (int j = 0; j < times[i].size(); j++) {
            cout << times[i][j].first << endl;
        }
        cout << endl;
    }


    return 0;
}