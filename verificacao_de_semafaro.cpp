#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cor;
    
    cout << "Digite a cor do semáfaro: ";
    cin >> cor;
    
    if (cor == "verde") {
        cout << "Siga";
    } else if (cor == "amarelo") {
        cout << "Espere";
    } else if (cor == "vermelho") {
        cout << "Pare";
    } else {
        cout << "Isso não é uma cor de semafáro";
    }
  
    return 0;
