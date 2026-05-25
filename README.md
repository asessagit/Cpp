# 🧠 Estudos em C++ — Fundamentos e Memória

> Repositório de aprendizado focado em C++ com ênfase em controle de memória, estruturas de controle e compilação com CMake.

---

## 📌 Motivação

C++ oferece algo que poucas linguagens oferecem: **controle direto sobre a máquina**.

Este repositório existe para explorar esse controle na prática — entendendo como variáveis ocupam memória, como o fluxo de execução funciona a nível baixo e como compiladores transformam código em binários executáveis. É um estudo deliberado, não apenas de sintaxe, mas de *como o software realmente funciona*.

---

## 📂 Estrutura do Projeto

```
/workspaces/c++/
├── .devcontainer/
├── .git/
├── .gitignore
├── .venv/
├── .vscode/
├── build/
├── docs/
├── legacy/
├── src/
├── CMakeLists.txt
└── README.md
```

---

## 🧩 Programas Disponíveis

| Programa      | Descrição                                              |
|---------------|--------------------------------------------------------|
| `hello_world` | Ponto de partida: saída básica e estrutura de um programa C++ |
| `if`          | Estruturas condicionais e fluxo de decisão             |
| `for`         | Laço `for` com iteração e controle de índice           |
| `while`       | Laço `while` e controle por condição                   |
| `mat`         | Operações com matrizes e alocação estática             |

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

- `g++` (compilador C++)
- `cmake` ≥ 3.10
- `ninja` ou `make`

> **Usando Dev Containers?** Tudo já está configurado. Basta abrir no VSCode e escolher **"Reopen in Container"**.

---

### Compilação com CMake (recomendado)

```bash
# Na raiz do projeto
mkdir build && cd build
cmake ..
make

# Executar um programa específico
./hello_world
./for
./while
./if
./mat
```

---

### Executando pelo VSCode (CMake Tools)

Se você usa a extensão **CMake Tools** no VSCode:

1. Abra o projeto no container
2. Na **barra inferior azul**, clique no seletor de *target*
3. Escolha o programa desejado (`hello_world`, `for`, `if`, `mat`, `while`)
4. Clique em ▶️ **Run** ou 🐛 **Debug**

Isso elimina a necessidade de rodar `./programa` manualmente no terminal.

---

## 🛠️ Ambiente de Desenvolvimento

Este projeto usa **Dev Containers** para garantir um ambiente padronizado e reproduzível.

| Ferramenta     | Versão configurada no container |
|----------------|----------------------------------|
| `g++`          | Instalado via apt                |
| `cmake`        | ≥ 3.10                           |
| `ninja`        | Gerador padrão do CMake          |
| VSCode Extensions | CMake Tools, C/C++ IntelliSense |

Para usar:
1. Instale o [Docker](https://www.docker.com/) e a extensão [Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) no VSCode
2. Clone o repositório
3. Abra no VSCode → **"Reopen in Container"**
4. Aguarde o build do container — tudo estará pronto para uso

---

## 📘 Conceitos Estudados

- **Saída e entrada de dados** — `std::cout`, `std::cin`
- **Condicionais** — `if`, `else if`, `else`
- **Laços de repetição** — `for`, `while`
- **Matrizes estáticas** — declaração, acesso e iteração
- **Ponteiros e variáveis** — como dados residem na memória
- **Compilação com CMake** — `CMakeLists.txt`, targets, build system

---

## 🗺️ Próximos Passos

- [ ] Ponteiros e aritmética de ponteiros
- [ ] Referências e passagem por valor vs. referência
- [ ] Alocação dinâmica (`new` / `delete`)
- [ ] Funções e escopo
- [ ] Structs e introdução a classes
- [ ] Vetores dinâmicos (`std::vector`)

---

## 📄 Licença

Repositório de uso pessoal para fins de estudo. Sem licença formal.