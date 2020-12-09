#include <iostream>
using namespace std;

int NumarPrim(int);

int main()
{
  int n;

  cout << "\nIntroduceti un numar: ";
  cin >> n;

  if(NumarPrim(n) == 0)
    cout <<"\nNumarul "<< n << " este numar prim.\n";
  else
    cout <<"\nNumarul "<< n << " nu este numar prim.\n";

  return 0;
}

int NumarPrim(int n)
{
  bool f = false;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          f = true;
          break;
      }
  }
  return f;
}
