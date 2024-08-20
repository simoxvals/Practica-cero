//ejercicio para formar por salida un tipo de figura con caracteres; sin solucion trivial

#include <iostream>

using namespace std;

int main()
{
    char letra = 'A';

    for (int i=0; i<7 ; i++){
        letra = 'A';
        for(int j=0; j<13; j++){
            if(j<=i){
                cout << (letra);
                letra =letra +1;
                if((letra)=='H'){
                    letra=letra-1;
                }
                continue;
            }
            if(j<12-i){
                cout << " ";
                continue;
            }
            if (j<13){
                letra=letra -1;
                cout << (letra);
            }
        }
        cout << "\n";
    }
    return 0;
}
