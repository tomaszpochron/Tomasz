#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
unsigned short int n,i;
//short int j;
double wiersz[150];
int main(int argc, char* argv[])
{

ofstream wpisz;
wpisz.open("plik.txt");



char mystring [20];

  cout << "podaj n ? :";
  cin >> n;
  cout << endl;
  cout<< " ";
  wpisz << " ";
for (int q = 0; q < n ; ++q){
  for (int i = 0; i < q+1 ; ++i)
  {
   int j;
     wiersz[i] = 1;
    for (j = i-1; j > 0; --j)
      wiersz[j] = wiersz[j-1]+wiersz[j];
  }

  for (int j = 0; j < q+1; j++)
  {
     cout << wiersz[j] << " ";
     wpisz << wiersz[j]<< " ";

  }
  cout<< "\n";
  wpisz << "\n ";
}

  cout <<endl;
  wpisz.close();
  cout <<endl;
  cin >> n;

}
 //10

