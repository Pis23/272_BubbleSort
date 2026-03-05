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

void bubblesortarray()
{
    int pass = 1;

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++ )
        {
            if (arr[j] > arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass +=1;

        cout << "\nPass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
        
    } while (pass <= n -1);
}