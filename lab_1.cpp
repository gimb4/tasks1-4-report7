#include <iostream>
using namespace std;

int main()
{
   setlocale(0, "");
   int number = 0;
   int b = 0;

   cout << "Введите число: ";
   cin >> number;

   for (int i = number; i != 0; i /= 10) {
       b++;
   }

   cout << "Количество цифр: " << b << endl;

  return 0;
 
}
