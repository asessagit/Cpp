1. Noções básicas
Vetores são a maneira mais simples de estruturarmos um conjunto de dados na memória principal.
- Em C++ todos os elementos devem ser do mesmo tipo, diferente do que estamos acostumados em Python na criação de listas, que permite a inclusão de elementos heterogêneos.
- Em C++ o tamanho é fixado na declaração do vetor. Antes de utilizar os vetores, temos que ter uma ideia de quantos elementos adicionaremos para alocar um espaço suficiente na memória. Em Python podemos iniciar um vetor vazio e adicionar ou diminuir elementos.
- Elementos ocupam regiões consecutivas de memória e é isso que garante otimizações, códigos mais rápidos. Acessar determinado elemento dado o seu índice pode ocorrer em tempo constante.

Na declaração, informamos o **tipo** e o **número** de elementos 
  
```c++
int c[10];
```
  

Declarando e inicializando os elementos:

```c++
int c[10] = {14, 0, 13};
```

- Inicializamos os três primeiros elementos.
- Como não fornecemos os valores para todos os elementos, o restante iniciará com **zero**.
    
```c++
14  0   13  0   0   0   0   0   0   0
0   1   2   3   4   5   6   7   8   9
```

Os elementos podem ser acessados com a sintaxe de colchetes:

```c++
c[5] = 30;
c[7] = 40;
c[8] = 50;
```

```c++
14  0   13  0   0   30  0   40  50  0 
0   1   2   3   4   5   6   7   8   9
```

É comum iterarmos pelos valores com **for**.

```c++
for (int i = 0; i < 10; i++) {
    std::cout << "c["<< i << "] = " << c[i] << "\n";
}
```

É tarefa do programador verificar os limmites do vetor antes de fazer o acesso.

A construção a seguir é comum:

```c++
int [] = {14, 0, 13};
```

O tamanho do vetor será o tamanho da lista.
Não adotaremos esta notação na diciplina por ser difícil de saber a quantidade de elementos.

Em alguns casos, inicializaremos os elementos com um laço de repetição:

```c++
int c[10];
for (int i = 0; i < 10; i++) {
    c[i] = 2*i;
}
```

**Alocação estática** em tempo de compilação **(vec_int.cpp)**

```c++
#include <iostream>
using namespace std;
int main() {
    int c[10] = {14, 0, 13};
    c[5] = 30;
    c[7] = 40;
    c[8] = 50;

    for (int i = 0; i < 10; i++) {
        cout << "c[" << i << "] = " << c[i] << "\n";
    }
    return 0;
}
```

Especificaremos o tamanho do vetor com uma variável constante: **(vec_const.cpp)**

```c++
#include <iostream>
using namespace std;
const int NUM_ELEM = 10;

int main() {
    int c[NUM_ELEM];

    for (int i = 0; i < NUM_ELEM; i++) {
        cout << "c[" << i << "] = " << c[i] << "\n";
    }
    return 0;
}
```
2. **Alocação dinâmica**

Os vetores declarados até aqui eram estáticos, pois o número de elementos era fixado em tempo de compilação.

Podemos declarar vetores em que o número de elementos é conhecido apenas durante a execução com alocação dinâmica.

- **O tamanho do vetor não poderá mudar após a declaração.**

Para fazer a alocação dinâmica, usaremos o operador **new** que já conhecemos:

```c++
int* c = new int[num_elem];
```
- O comando alocará ua região de memória de tamanho suficiente para alocar **num_elem** elementos inteiros contíguos.
- Em outras palavras, o comando cria **num_elem** elementos inteiros consecutivos (um vetor).
- A variável **c** recebe o endereço do primeiro elemento do vetor. Feito isso, podemos usar a sintaxe de colchetes.

```c++
    c[5] = 30;
    c[7] = 40;
    c[8] = 50;
```
- vec_din.cpp

```c++
#include <iostream>
using namespace std;

int main() {
    int num_elem;
    cout << "Digite o tamanho do vetor";
    cin >> num_elem;

    int* c = new int[num_elem];

    for (int i = 0; i < num_elem; i++) {
        c[i] = 2*i;
    }

    for (int i = 0; i < num_elem; i++) {
        cout << "c[" << i << "] = " << c[i] << "\n";
    }
    return 0;
}
```
- Como a alocação foi feita de forma dinâmica com **new**, precisamos desalocar a memória com o comando **delete**.

```c++
int* c = new int[num_elem];
delete [] c;
```
3. Pasasagem de parâmetro de vetor para funções

No comando a seguir:
```c++
int c[10];
```
- A variável **c** armazena o endereço base do vetor. Na verdade ela armazena o endereço do primeiro byte do primeiro elemento.
- Nesse caso. **c** é um ponteiro.

O mesmo ocorre na alocação dinâmica:
```c++
int* c = new int[num_elem];
```
- Quando passamos um vetor para uma função, estamos passando um ponteiro.
- Passagem de ponteiros (**métodos**):

```c++
void valor_alocando_memoria(int* p){
    p = new int;
    *p = 7;
}
```
```c++
void valor_modificando_memoria(int* p){
    p = new int;
    *p = 8;
}
```
```c++
void referencia(int*& p){
    p = new int;
    *p = 9;
}
```
- vec_param.cpp
- pont_param.cpp