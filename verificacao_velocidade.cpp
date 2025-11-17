#include <iostream>
#include <string>
using namespace std;

int main()
{
  int velocidade;
  
  cout << "Digite sua velocidade: ";
  cin >> velocidade;
  
  if (velocidade > 80) {
      cout << "velocidade acima do permitido, diminua";
      
  } else {
      cout << "velocidade segura";
  }
    return 0;
}
