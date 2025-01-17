#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<string> alunos(n);

    string aluno;
    for (int i = 0; i < n; i++) {
        cin >> alunos[i];
    }

    sort(alunos.begin(), alunos.end());

    cout << alunos[k-1] << endl;

    return 0;
}