#include <iostream>
#include <string>
using namespace std;

//deklarasi
int arr[20];
int n;

//prosedur input
void input()
{
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen array : ";
        cin >> n;
        if (n<=20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
}