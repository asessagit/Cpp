1. Definição de ponteiros

Um ponteiro é uma variável que armazena o endereço de memória de outra variável. 

Ele permite acessar e manipular diretamente a memória, o que pode ser útil para otimizar 
o desempenho e criar estruturas de dados dinâmicas.

Os endereços podem ser a localização na memória de uma variável ou função.
   - O endereço de uma variável (ou função) é a localização na memória do primeiro byte
   ocupado por ela. (Em linux, uma pagesize - 4096 bytes)
   - Conhecer o endereço de uma variável permite criar estruturas complexas.
    - Listas encadeadas são implementadas com um item conhecendo o endereço do item seguinte.
    - Se a variável (x) tiver como valor o endereço da variável(y), então dizemos: "(x)aponta para (y)"

A possibilidade de trabalhar diretamente com a memória permite criar programas mais eficientes.


2. Declaração de Ponteiros(sintaxe)

tipo *ponterio;
  - int *a;
  - int* a;

A seguir declaramos uma variável chama da intPointer que aponta para um valor do tipo inteiro:
int* intPointer;

Como a variável não foi inicializada, o seu conteúdo será undefined.

A pergunta agora é: "Como obter um endereço de memória?"
    - Isso pode ser feito de maneira estática(em tempo de compilação) ou dinâmica(em tempo de execução).

3. Inicialização de Ponteiros

O operador & nos permite obter o endereço de memória de uma variável. Feito isso, podemos inicializar um ponteiro.

- Declarando variáveis
int alpha;
int* intPointer;

- Inicializando ponteiro
intPointer = &alpha;

- Inicializando ponteiro de maneira dinâmica

Uma segunda maneira de inicializar ponteiros é com alocção dinâmica, um mecanismo pelo qual um programa aloca e libera memória em tempo de execução.

    - Vantagens: Elimina a necessidade de definir a priori o tamanho da memória a ser utilizada.
    - É possível aumentar ou diminuir o tamanho da memória utitilizada em tempo de execução.

- Operadores

Os operadores new e delete são utilizados para efetuar a alocação e desalocação de memória, respectivamente.

- Alocando memória dinamicamente

int *intPointer;
intPointer = new int;

- Características da alocação dinâmica

    - As variáveis residem em um local diferente das que foram alocadas estaticamente.(stack/heap)
    - Uma variável alocada de forma dinâmica com "new" não possui nome.
    - Essa variável precisa ser acessada indiretamente pelo ponteiro retornado por "new". 

4. Utilização de Memória

Temos um ponteiro e queremos acessar o valor que está na memória. Nesse caso usamos o operador "*" como 
um prefixo para o nome da variável.

O operador "*" é um operaddor unário que retorna o conteúdo da variável localizada no endereço especificado.

"Pegar o valor de uma região da memória" 

 - Para obter o conteúdo que está localizado no endereço de memória apontado por intPointer: 

    
    - Int anotherInt; 
    - anotherInt = *intPointer;

 - Para alterar o conteúdo que está localizado no endereço apontado por intPointer:
    
    - *intPointer = 25;
 
 - Um ponteiro com valor 0(zero), por definição, aponta para o vazio, mas não queremo confunfir com o inteiro zero.

 Nesse caso, usaremos a constante "NULL" que está no pacote csttdev.

 #include csttdev
 
 bool* thruth = NULL;
 float* money = NULL;

 Vamos observar a memória após algumas operações:

 - boll* truth = new bool;
 
    *truth = **true**; *(valor da região de memória)*
 
 - float* money = new float;
    
    *money = **33.46**; *(valor da região de memória)*

 - float* myMoney = new float;

    *myMoney = **???** *(valor da região de memória **não informado)***

```
Qualquer operação que pode ser aplicada a uma variável do tipo int pode ser aplicada a *intPointer
*Ex.: *intPointer + 1 (incremento de 1)*
```

```
Qualquer operação que pode ser aplicada a uma variável do tipo float pode ser aplicada a *money
```

```
Qualquer operação que pode ser aplicada a uma variável do tipo bool pode ser aplicada a *truth
```

5. Cuidados com Ponteiros

A duas operações a seguir são completamente diferentes.

    - Na primeira, o conteúdo de memória apontado para money é copiado para por myMoney;
    - Na segunda, myMoney passa a apontar para a mesma região apontada por money;

        1ª *myMoney = *money;
        2ª myMoney = money; **(Vazamento de memória)**

    Supondo que a segunda operação fosse a intenção, evite o vazamento de memória com **delete**. Para isso é necessário primeiro desalocar a região de memória que não será mais usada, no caso, myMoney.

        delete myMoney;
        myMoney = money;

    Observe que o delete não inutiliza a variável ponteiro, apenas libera a região que ela aponta.

        money = 33.46 (*money e *myMoney tem o mesmo valor na mesma região da memória)
    