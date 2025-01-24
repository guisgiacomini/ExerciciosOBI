//Copa do Mundo - OBI 2010

#include <bits/stdc++.h>

using namespace std;

int main() {
    queue <char> times;
    for (char i = 'A'; i <= 'P'; i++) {
        times.push(i);
    }

    for (char i = 0; i < 15; i++) {
        char t1 = times.front(); 
        times.pop();
        char t2 = times.front();
        times.pop();

        int gols_t1, gols_t2;
        cin >> gols_t1 >> gols_t2;
        if (gols_t1 > gols_t2) times.push(t1);
        else times.push(t2);
    }

    cout << times.front() << endl;

    return 0;
}