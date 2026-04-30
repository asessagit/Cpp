#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    int sum = number1 + number2;
    int sub = number1 - number2;
    int mul = number1 * number2;
    int div = number1 / number2;
    float fdiv = (float)number1 / (float)number2;
    int res = number1 % number2;

    cout << "Soma: " << sum << endl;
    cout << "Subtração: " << sub << endl;
    cout << "Multiplicação: " << mul << endl;
    cout << "Divisão inteira: " << div << endl;
    cout << "Divisão real: " << fdiv << endl;
    cout << "Resto da divisão: " << res << endl;

    return 0;
}
