// 2. Operações de comparação em C++:
#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    if (number1 == number2)
        cout << "São iguais\n";
    if (number1 != number2)
        cout << "São diferentes\n";
    if (number1 > number2)
        cout << "Primeiro maior\n";
    if (number1 < number2)
        cout << "Segundo maior\n";
    if (number1 >= number2)
        cout << "Primeiro maior ou igual\n";
    if (number1 <= number2)
        cout << "Segundo menor ou igual\n";

    return 0;
}
