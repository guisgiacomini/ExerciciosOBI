#include <vector>
#include <iostream>

using namespace std;

int element_index(vector<int> v, int element) {
    int vSize = v.size();

    for (int i = 0; i < vSize; i++) {
        if (v[i] == element) {
            return i;
        }
    }

    return -1;
}
int main() {
    int n;
    cin >> n;

    vector <int> fila(n);

    for (int i = 0; i < n; i++) {
        cin >> fila[i];
    }

    int m;

    cin >> m;

    int saiu;
    for (int i = 0; i < m; i++) {
        cin >> saiu;
        int pos = element_index(fila, saiu);
        fila.erase(fila.begin() + pos);
    }

    for (int i = 0; i < n - m; i++){
        cout << fila[i] << " ";
    }

    cout << endl;
    return 0;    
}