# include <iostream>
using namespace std;

void troca_por_valor(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;

    cout << "Antes da troca: x = " << x << ", y = " << y << endl;

    troca_por_valor(x, y);

    cout << "Depois da troca: x = " << x << ", y = " << y << endl;

    return 0;
}