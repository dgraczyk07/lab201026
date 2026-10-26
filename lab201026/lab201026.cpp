#include <iostream>
#include <math.h>

using namespace std;

int main() {

    /*  int a;
        int b;

        cout << "Podaj wartosc a: \n";
        cin >> a;
        cout << "Podaj wartosc b: \n";
        cin >> b;

        if (a == b)
            cout << "Liczby sa rowne" << endl;
        if (a < b)
            cout << "Liczba a jest mniejsza od liczby b" << endl;
        if (a>b)
            cout << "Liczba a jest wieksza od liczby b" << endl;
    */

    /*int a;
      int b;

      cout << "Podaj wartosc a: \n";
      cin >> a;
      cout << "Podaj wartosc b: \n";
      cin >> b;

      if (a == b) {
      cout << "Liczby sa rowne" << endl;
      }
      else if (a < b) {
          cout << "Liczba a jest mniejsza od liczby b" << endl;
      }
      else if (a > b) {
          cout << "Liczba a jest wieksza od liczby b" << endl;
      }
     */

     /*double r;

      cout << "Podaj wartosc r: \n";
      cin >> r;

      if (r >= 0 && r <= 0.2) {
          cout << "Brak korelacji" << endl;
      }
      else if (r >= 0.2 && r <= 0.3) {
          cout << "Slaba korelacja dodatnia" << endl;
      }
      else if (r >= 0.3 && r <= 0.5) {
          cout << "Umiarkowana korelacja dodatnia" << endl;
      }
      else if (r >= 0.5 && r <= 0.7 ) {
          cout << "Silna korelacja dodatnia" << endl;
      }
      else if (r >= 0 / 7 && r <= 1) {
          cout << "Bardzo silna korelacja dodatnia" << endl;
      }
     */

     /*
     
     double a; //lepiej w switch
      double b;
      int znak;

      cout << "Podaj pierwsza liczbe: " << endl;
          cin >> a;
      cout << "Podaj druga liczbe : " << endl;
          cin >> b;
      cout << "Wprowadz znak dzialania: " << endl;
          cin >> znak;

      if (znak == '+') {
          cout << "Wynik dodawania : " << a + b << endl;
      }
      else if (znak == '-') {
          cout << "Wynik odejmowania: " << a - b << endl;
      }
      else if (znak == '*') {
          cout << "Wynik mnozenia : " << a * b << endl;
      }

      else if (znak == '/') {
          if (b == 0) {
              cout << "Nie mozna dzielic przez zero" << endl;
          }
          else ((znak == '/')) {
              cout << "Wynik dzielenia : " << a / b << endl;
          }
      }
      */
      /*  int i = 0;               //***
         while (i < 10) {
             for (int j = 0; j < 10; j++) {
                 cout << "i = " << i << ", j = " << j << endl;
                 if (j >= 1)
                     break;
             } //koniec kodu petli for - petla wewnetrzna
             i++;
         } //koniec kodu petli while - petla zewnetrzna
     }

     */

    /* zad 6.
    
    double a; //lepiej w switch
    double b;
    char znak;

    while (true) {

        cout << "Podaj pierwsza liczbe: " << endl;
        cin >> a;
        cout << "Podaj druga liczbe : " << endl;
        cin >> b;
        cout << "Wprowadz znak dzialania: " << endl;
        cin >> znak;

        if (znak == '+') {
            cout << "Wynik dodawania : " << a + b << endl;
        }
        else if (znak == '-') {
            cout << "Wynik odejmowania: " << a - b << endl;
        }
        else if (znak == '*') {
            cout << "Wynik mnozenia : " << a * b << endl;
        }

        else if (znak == '/') {
            if (b == 0) {
                cout << "Nie mozna dzielic przez zero" << endl;
            }
            else {
                cout << "Wynik dzielenia : " << a / b << endl;
            }
        }

        cout << "Czy chcesz zakonczyc program?" << endl;
        cin >> znak;
        if (znak == 't' || znak == 'T') {
            break;
        }
        else if (znak == 'n' || znak == 'N') {
            continue;
        }
        else if (znak != 't' && znak != 'T' && znak != 'n' && znak != 'N') {
            cout << "Niepoprawny znak" << endl;
        }
    }*/

/* zad. 7.

int i;
i = 0;
    while (1) {
        cout << i++ << endl;
            if (i == 200) {
                break;
            }
}
*/
  
int n;
int i;
cout << "Wprowadz dowolna liczbe naturalna dodatnia: " << endl;
cin >> n;

for (i = 2; i <= sqrt(n); i++) {
    if (n% i == 0) {
        cout << "Podana liczba posiada dzielnik z przedzialu [2," << sqrt(n) << "]" << endl;
        break;
        }


    }


}

