#include <iostream>
#include <math.h>

using namespace std;

int main() {

    /* zad.1.  int a;
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

    /* zad.2.

    int a;
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

     /* zad.3.

     double r;

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

     /* zad.4.

    double a; 
    double b;
    char znak;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe : " << endl;
    cin >> b;
    cout << "Wprowadz znak dzialania (+,-,*,/) : " << endl;
    cin >> znak;

    switch (znak) {
        case '+':
            cout << "Wynik dodawania: " << a + b << endl;
            break;
        case '-':
            cout << "Wynik odejmowania: " << a - b << endl;
            break;
        case '*':
            cout << "Wynik mnozenia: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Nie mozna dzielic przez 0!" << endl;
                    return 1;
            }
            else if (b != 0) {
                cout << "Wynik dzielenia: " << a / b << endl;
                break;
            }
    }*/



    /* zad.5.
        int i = 0;
        while (i<10) {
            i++;
            if (i == 5)
                continue; //przerwij dzialanie iteracji dla ktorej i==5
                cout << "Iteracja nr " << i << endl;
        }
        return 0;
    */
   

   /* zad 6.

    while (true) {
        double a;
        double b;
        char znak;
        char d;

        cout << "Podaj pierwsza liczbe: " << endl;
        cin >> a;
        cout << "Podaj druga liczbe : " << endl;
        cin >> b;
        cout << "Wprowadz znak dzialania (+,-,*,/) : " << endl;
        cin >> znak;

        switch (znak) {
        case '+':
            cout << "Wynik dodawania: " << a + b << endl;
            break;
        case '-':
            cout << "Wynik odejmowania: " << a - b << endl;
            break;
        case '*':
            cout << "Wynik mnozenia: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Nie mozna dzielic przez 0!" << endl;
                return 1;
            }
            else if (b != 0) {
                cout << "Wynik dzielenia: " << a / b << endl;
                break;
            }
        default:
            cout << "Niepoprawny znak dzialania." << endl;
            break;
        }
        cout << "Czy chcesz zakonczyc program? (T/N)" << endl;
        cin >> d;

        switch (d) {
        case 'T':
        case 't':
            return 0;;

        case 'N':
        case 'n':
            continue;
        }
    }
    */

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

  /*int n;
   int i;
   cout << "Wprowadz dowolna liczbe naturalna dodatnia: " << endl;
   cin >> n;

   for (i = 2; i <= sqrt(n); i++) {
       if (n% i == 0) {
           cout << "Podana liczba posiada dzielnik z przedzialu [2," << sqrt(n) << "]" << endl;
           break;
           }


       }
   */
/* zad.14.

    int i;
    int suma = 0;
    for (i = 1; i <= 100;i++) {
        if (i % 3 == 0) {
            continue;
        }
        cout << i << endl;
        suma += i;
    }

    cout << "suma wynosi: " << suma << endl;
    */




}