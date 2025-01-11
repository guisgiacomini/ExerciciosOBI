#include <bits/stdc++.h>

using namespace std;

int main()
{
   int d, dia1, chegada;

   cin >> d >> dia1 >> chegada;

   if (chegada == 1) cout << d * 31;
   else if (chegada > 14)
   {
      int diaria = d + 14 * dia1;
      cout << -1*(chegada - 1 - 31) * diaria;
   }
   else {
      int diaria = d + (chegada - 1) * dia1;
      cout << -1*(chegada - 1 - 31) * diaria;
   }

   cout << endl;

   return 0;


}