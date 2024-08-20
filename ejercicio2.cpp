//ejercicio dos
#include <iostream>
using namespace std;

int main()
{
    char letra = 'A';
    short int espacios = 11;
    for (int i = 0; i < 7; i++) {
        cout << letra;
        for (short int j = 0; j < espacios; j++) {
            cout << " "; 
        }
    }
    return 0;
}