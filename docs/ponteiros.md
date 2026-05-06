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


2. Declaração de Ponteiros (sintaxe)

tipo *ponterio;
  - int *a;
  - int* a;

A seguir declaramos uma variável chama da intPointer que aponta para um valor do tipo inteiro:
int* intPointer;

Como a variável não foi inicializada, o seu conteúdo sera undefined.

A pergunta agora é: "Como obter um endereço de memória?"
    - Isso pode ser feito de maneira estática(em tempo de compilação) ou dinâmica(em tempo de execução).

3. Inicialização de Ponteiros

O operador & nos permite obter o endereço de memória de uma variável. Feito isso, podemos inicializar um ponteiro.

- Declarando variáveis
int alpha;
int* intPointer;

- Inicializando ponteiro
intPointer - &alpha;

- Inicializando ponteiro de maneira dinâmica

Uma segunda maneira de inicializar ponteiros é com alocção dinâmica, um mecanismo pelo qual um programa aloca e libera memória em tempo de execução.

    - Vantagens: Elimina a necessidade de definir a priori o tamanho da memória a ser utilizada.
    - É possível aumentar ou diminuir o tamanho da memória utitilizada em tempo de execução.

- Operadores

Os operadores new e delete são utilizados para efetuar a alocação e desalocação de memória, respectivamente.






Utilização de Memória
Cuidados com Ponteiros