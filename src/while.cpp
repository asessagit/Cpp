#include <iostream>
using namespace std;

int main() {
    int numeros[10];   // vetor com 10 posições
    int soma = 0;
    int maior, menor;

    // Entrada dos números
    for (int i = 0; i < 10; i++) {
        cout << "Digite o número " << (i+1) << " de 10: ";
        cin >> numeros[i];
        soma += numeros[i];

        if (i == 0) { // inicializa maior e menor com o primeiro valor
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > maior) maior = numeros[i];
            if (numeros[i] < menor) menor = numeros[i];
        }
    }

    // Saída dos números digitados
    cout << "\nVocê digitou os seguintes números:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Posição " << i << ": " << numeros[i] << endl;
    }

    // Estatísticas
    cout << "\nSoma: " << soma << endl;
    cout << "Média: " << (float)soma / 10 << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int counter = 0;
//     int number;

//     while (counter < 10) {
//         cout << "Enter a number: (" << counter << ") ";
//         cin >> number;
//         cout << "Você digitou: " << number << endl;
//         counter++;
//     }

//     return 0;
// }