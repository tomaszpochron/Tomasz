#include <iostream>
#include <math.h>

using namespace std;


float dopelnienie(float a11, float a22, float a12, float a21)                           //funkcja liczaca dopelnienia
{                          
    return ( a11*a22 - a12*a21 );
    }

int main()
{
    float macierz[3][3];
    int i, j;
    cout <<"\nWpisz liczby: \n " << endl;
    for ( i=0; i<3; i++ )
    {
    for ( j=0; j<3; j++)
    {
    cout << "a" << i+1 << j+1 << " = ";  
    cin >> macierz[i][j];
    }
    }
    cout << "\nWypisana macierz: \n";
    for ( i=0; i<3; i++ )
    {
        cout << "\n\n";
        for ( j=0; j<3; j++ )
        cout << "      " << macierz [i][j];
        }
    cout << "\n\n";
   

    float trans[3][3];                                                                  //macierzy transponowana
    for ( i=0; i<3; i++)
    {
        for ( j=0; j<3; j++)
        trans[j][i] = macierz[i][j];
    }
    cout <<"\nMacierz transponowana (odwrotna): \n";
    for ( i=0; i<3; i++){
        cout <<"\n\n";
        for ( j=0; j<3; j++ )
        cout << "     " << trans[i][j];
    }

   
    float dop11, dop12, dop13, dop21, dop22, dop23, dop31, dop32, dop33;                    //dopelnienie algebraiczne
   
    dop11 = dopelnienie(macierz[1][1], macierz[2][2], macierz[1][2], macierz[2][1]);
    dop12 = (-1)*  dopelnienie(macierz[1][0], macierz[2][2], macierz[1][2], macierz[2][0]);
    dop13 = dopelnienie(macierz[1][0], macierz[2][1], macierz[1][1], macierz[2][0]);
 
   


    float det;                                                                             //obliczenie wyznacznika
    det = (macierz[0][0]*dop11) + (macierz[0][1]*dop12) + (macierz[0][2]*dop13);
   
    cout << "\n\nWyznacznik macierzy jest: ";
    cout << det << endl;

   
    if ( det == 0 )
    {                                                                       //sprawdzenie czy det=0
        cout << "\nMacierz jest osobliwa!\n\n";      
        system ("pause");
        return 0;
        }
    else{
       

    cout <<"\n\n Macierz transponowana (odwrotna): \n\n";                                      //macierz odwrotna
    for ( i=0; i<3; i++)
    {
        cout << "\n\n";
        for ( j=0; j<3; j++ )
        cout << "     " << (1/det)*trans[i][j];
    }
    }
       
    cout << "\n\n\n";  
    system("pause");
    return 0;
}