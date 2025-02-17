//Ogros - OBI 2008
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> faixas;

    for (int i = 0; i < n - 1; i++) {
        int faixa;
        cin >> faixa;
        faixas.push_back(faixa);
    }
    
    vector <int> premiacoes;
    for (int i = 0; i < n; i++) {
        int premiacao;
        cin >> premiacao;
        premiacoes.push_back(premiacao);
    }

    vector <int> ogros(m);
    for (int i = 0; i < m; i++) {
        cin >> ogros[i];
    }
    
 
    for (int i = 0; i < m; i++) {
        int faixa_forca = n-1;
        for (int j = 0; j < n - 1; j++) {
            if (ogros[i] < faixas[j]) {
                faixa_forca = j;
                break;
            }
        }

        for (int j = 0; j < n; j++) {
            if (j == faixa_forca) {
                cout << premiacoes[j] << " ";
            }
        }

    }

    cout << endl;

    return 0;

}
