#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

        const int SIZE = 5;
        int arr[SIZE] = { 2, 4, 6, 8, 10 };
        int a = 1;

        for (int i = 0; i < SIZE; i++) {
            a *= arr[i];
        }

        cout << "Произведение всех элементов массива: " << a << endl;

        return 0;
   
}

