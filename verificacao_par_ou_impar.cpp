#include <iostream>
#include <string>
using namespace std;

int main()
{
  int num;
  
  cout << "Digite um número: ";
  cin >> num;
  
  if (num % 2 == 0) {
      cout << "Par" << endl;
  } else {
      cout << "Impar" << endl;
  }
    return 0;
}
