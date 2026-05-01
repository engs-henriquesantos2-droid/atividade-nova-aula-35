#include <iostream>
using namespace std; 
 
   int main () { 
     int N;
     long long fatorial = 1;
     
      cout << "digite um numero: ";
      cin >> N;

       
 for (int i = 1; i <= N; i++) {
        fatorial *= i;
   
    }

    cout << "fatorial de " << N << " = " << fatorial << endl;
    return 0;
}

 
       