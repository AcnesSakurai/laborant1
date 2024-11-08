#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double x2 = x * x;
    double x3 = x2 * x; 

    double y = 2 * x3 + 4 * x2 - 8 * x + 3;

    cout << "Значение y: " << y << endl;

    return 0;
}
