//Frequência na Aula - OBI 2012

#include <bits/stdc++.h>

using namespace std;

int main() {
    set <int> alunos;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int aluno;
        cin >> aluno;
        alunos.insert(aluno);
    }

    cout << alunos.size() << endl;

    return 0;
}