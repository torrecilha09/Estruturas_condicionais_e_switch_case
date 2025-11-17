#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b,c;
  
  cout << "Digite o primeiro número: " << endl;
  cin >> a;
  
 
  cout << "Digite o segundo número: " << endl;
  cin >> b;
  
  
  cout << "Digite o primeiro número: " << endl;
  cin >> c;
  
  
 
  if (a>b && a>c) {
      cout << "o numero " << a << " e maior." << endl;
  } else if (b>a && b>c) {
      cout << "o numero " << b << " e maior." << endl;
  } else {
      cout << "o numero " << c << " e maior." << endl;
  } 

 
 
 return 0;
    }
