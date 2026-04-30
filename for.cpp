// 3.1 Operações de Repetição em C++:
#include <iostream>

using namespace std; // Não é preciso usar std:: antes de cada comando
    int total;
    for (int number = 2; number <= 20; number +=2) {
        total += number;
    cout << "Total: " << total << std::endl;
    return 0;
    }