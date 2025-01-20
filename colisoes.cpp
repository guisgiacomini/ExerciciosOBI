//Detectando Colisões - OBI 2007

#include <bits/stdc++.h>

using namespace std;

int main() {
    //cada retângulo é um par de pontos, cada ponto é um par ordenado (x, y)
    pair <int, int> r1[2];
    pair <int, int> r2[2];

    for (int i = 0; i < 2; i++) {
        cin >> r1[i].first >> r1[i].second;
    }

    for (int i = 0; i < 2; i++) {
        cin >> r2[i].first >> r2[i].second;
    }

    int r1_largura = abs(r1[1].first - r1[0].first);
    int r1_altura = abs(r1[1].second - r1[0].second);

    int r2_largura = abs(r2[1].first - r2[0].first);
    int r2_altura = abs(r2[1].second - r2[0].second);

    if ( r1[1].second < r2[0].second || 
    r2[1].second < r1[0].second ||
    r1[1].first < r2[0].first || 
    r2[1].first < r1[0].first) {
        cout << 0 << endl;
    }
    else { 
        cout << 1 << endl;
    }

    

}