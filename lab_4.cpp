#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int a;

    cout << "Введите число: ";
    cin >> a;

    if (a > 0) {
        cout << "Число положительное" << endl;
    }
    else if (a < 0) {
        cout << "Число отрицательное" << endl;
    }
    else {
        cout << "Число является нулем" << endl;
    }

    return 0;
}