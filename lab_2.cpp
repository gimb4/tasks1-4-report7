#include <iostream>
using namespace std;
   int main() {
       setlocale(0, "");
       int arr[] = { 12, 32, 53, 74, 35 }; 
       int size = sizeof(arr) / sizeof(arr[0]); 

       int sum = 0;
       for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        std::cout << "Сумма всех элементов: " << sum << std::endl;

        return 0;
    }