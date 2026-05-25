#include <iostream>
using namespace std;
int main() {
    // Exemplo: criar um vetor de 5 ele imprimir seus valores
    const int size = 5;
    int myVector[size] = {10, 20, 30, 40, 50};

    cout << "Elementos do vetor:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "myVector[" << i << "] = " << myVector[i] << endl;
    }

    return 0;
}