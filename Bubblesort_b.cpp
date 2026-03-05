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
    cout << endl;
    cout << "Masukkan elemen array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}