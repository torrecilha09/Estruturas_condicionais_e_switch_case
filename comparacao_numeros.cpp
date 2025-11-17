#include <iostream>
#include <string>
using namespace std;

int main()
{
   float num1;
   float num2;
    
    cout << "Digite um número: " << endl;
    cin >> num1;
    
    cout << "Digite outro número: " << endl;
    cin >> num2;
    
    if (num1 > num2) {
        cout << "O primeiro número é maior";
    } else {
        cout << "O segundo número é maior";
    }

    return 0;
}
