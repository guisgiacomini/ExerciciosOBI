//Repositórios - OBI 2007
#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main() {
    int c, n; cin >> c >> n;

    map<lli, lli> programas;

    while (c--){
        lli programa; lli versao;
        cin >> programa >> versao;

        programas[programa] = versao;
    }

    map<lli, lli> programas_internet;

    while (n--) {
        lli programa_internet; lli versao_internet;
        cin >> programa_internet >> versao_internet;

        if ((programas_internet.find(programa_internet) != programas_internet.end() 
        && versao_internet > programas_internet[programa_internet])
        || programas_internet.find(programa_internet) == programas_internet.end()) {
            programas_internet[programa_internet] = versao_internet;
        }       
    }

    map<lli, lli> atualizados;

    auto it_internet = programas_internet.begin();
    
    for (; it_internet != programas_internet.end(); it_internet++) {
        if (programas.find(it_internet->first) == programas.end()) atualizados[it_internet->first] = it_internet->second;
        else if (programas_internet[it_internet->first] > programas[it_internet->first]) atualizados[it_internet->first] = it_internet->second;;
    }
    
    auto it = atualizados.begin();

    for (; it != atualizados.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}