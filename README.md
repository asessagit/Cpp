# 🧠 Estudos em C++ — Fundamentos e Memória

[![Linguagem](https://img.shields.io/badge/linguagem-C%2B%2B-blue.svg)](https://en.cppreference.com/)
[![CMake](https://img.shields.io/badge/build-CMake-green.svg)](https://cmake.org/)
[![License](https://img.shields.io/badge/license-Pessoal-yellow.svg)](#licença)

> Repositório de aprendizado focado em C++ com ênfase em controle de memória, estruturas de controle e compilação com CMake.

---

## ⚡ Quick Start (3 passos)

Quer rodar agora?

```bash
# 1. Clone o repositório
git clone <seu-fork-aqui>
cd c++

# 2. Compile
cmake -B build && cmake --build build

# 3. Execute um programa
./build/hello_world
```

**Pronto!** Veja mais exemplos na seção [🚀 Como Compilar e Executar](#-como-compilar-e-executar).

---

## 📌 Motivação

C++ oferece algo que poucas linguagens oferecem: **controle direto sobre a máquina**.

Este repositório existe para explorar esse controle na prática — entendendo como variáveis ocupam memória, como o fluxo de execução funciona a nível baixo e como compiladores transformam código em binários executáveis. É um estudo deliberado, não apenas de sintaxe, mas de *como o software realmente funciona*.

---

## 📂 Estrutura do Projeto

```
c++/
├── .devcontainer/       # Configuração do ambiente
├── .vscode/             # Configurações do VSCode
├── src/                 # Código fonte C++
│   ├── hello_world.cpp
│   ├── if.cpp
│   ├── for.cpp
│   ├── while.cpp
│   ├── vec.cpp
│   └── mat.cpp
├── build/               # Artefatos compilados (gerado)
├── docs/                # Documentação adicional
├── CMakeLists.txt       # Configuração CMake
└── README.md
```

---

## 🧩 Programas Disponíveis

| Programa      | Descrição                                              | Nível   |
|---------------|--------------------------------------------------------|---------|
| `hello_world` | Saída básica com `std::cout`                          | 🟢 Básico |
| `if`          | Estruturas condicionais e decisão                     | 🟢 Básico |
| `for`         | Laço `for` com iteração                               | 🟢 Básico |
| `while`       | Laço `while` com condição                             | 🟢 Básico |
| `vec`         | Vetores estáticos e alocação                          | 🟡 Intermediário |
| `mat`         | Matrizes 2D e operações                               | 🟡 Intermediário |

---

## 📥 Pré-requisitos

Escolha seu sistema operacional:

### Windows

```bash
# Com Chocolatey
choco install cmake mingw-w64

# Ou baixe manualmente:
# - CMake: https://cmake.org/download/
# - MinGW: https://www.mingw-w64.org/
```

### macOS

```bash
# Com Homebrew
brew install cmake gcc
```

### Linux (Ubuntu/Debian)

```bash
sudo apt-get update
sudo apt-get install -y cmake build-essential
```

### Dev Container (Recomendado ⭐)

Tudo já está configurado! Basta:
1. Instale [Docker](https://www.docker.com/products/docker-desktop)
2. Instale a extensão [Dev Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) no VSCode
3. Clone o repositório e abra no VSCode
4. Clique em **"Reopen in Container"**
5. Aguarde o build — tudo estará pronto! ✓

---

## 🚀 Como Compilar e Executar

### Opção 1: CMake + Make (Terminal)

```bash
# Crie a pasta de build e configure
mkdir build
cd build
cmake ..

# Compile
make

# Execute um programa
./hello_world    # Saída: Hello, World!
./if             # Executa exemplo com if/else
./for            # Executa loop for
./while          # Executa loop while
./vec            # Executa operações com vetores
./mat            # Executa operações com matrizes
```

### Opção 2: CMake (Uma linha)

```bash
cmake -B build && cmake --build build
cd build
./hello_world
```

### Opção 3: VSCode com CMake Tools (Recomendado)

1. Instale a extensão **CMake Tools** no VSCode
2. Abra a paleta de comandos: `Ctrl+Shift+P` (ou `Cmd+Shift+P` no Mac)
3. Digite: `CMake: Select a Kit` → Escolha seu compilador
4. Digite: `CMake: Configure` → Deixe configurar
5. Na **barra inferior azul**, clique no seletor de target
6. Escolha o programa desejado: `hello_world`, `for`, `if`, `mat`, `vec`, `while`
7. Clique em ▶️ **Run** ou 🐛 **Debug**

---

## 📘 Conceitos Estudados

- **Saída e entrada** — `std::cout`, `std::cin`, formatação
- **Condicionais** — `if`, `else if`, `else`, operadores lógicos
- **Laços de repetição** — `for`, `while`, controle de fluxo
- **Vetores e matrizes** — declaração estática, acesso, iteração
- **Compilação com CMake** — targets, geração de binários
- **Debug com VSCode** — breakpoints, variáveis, stepping

---

## 📝 Estrutura de Cada Arquivo

### hello_world.cpp
Ponto de partida. Saída simples.
```cpp
#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### if.cpp
Exemplo de estruturas condicionais e tomada de decisão.

### for.cpp
Demonstra uso de loops `for` com variações.

### while.cpp
Exemplos com loops `while` e controle por condição.

### vec.cpp
Operações com vetores (arrays 1D) e alocação estática.

### mat.cpp
Operações com matrizes (arrays 2D) e iteração.

---

## 🛠️ Ambiente de Desenvolvimento

| Ferramenta     | Versão/Info                    |
|----------------|--------------------------------|
| C++ Standard   | C++11 ou superior              |
| Compilador     | g++ ou clang                   |
| CMake          | ≥ 3.10                         |
| Gerador        | Ninja (padrão) ou Make         |
| VSCode Ext.    | CMake Tools, C/C++ IntelliSense |

---

## ❌ Troubleshooting

### "cmake: command not found"
**Solução:** Instale CMake (veja seção [Pré-requisitos](#pré-requisitos))

### "g++: command not found"
**Solução:** Instale um compilador C++
```bash
# Linux
sudo apt-get install build-essential

# macOS
brew install gcc
```

### "Permission denied" ao executar
**Solução:** Adicione permissão de execução
```bash
chmod +x ./build/hello_world
```

### "No such file or directory: CMakeLists.txt"
**Solução:** Execute os comandos na **raiz do projeto** (onde está o CMakeLists.txt)
```bash
pwd  # Verifique que está em /c++
cmake -B build
```

### CMake não encontra o compilador
**Solução:** Especifique o compilador manualmente
```bash
cmake -B build -DCMAKE_CXX_COMPILER=g++
```

---

## 🗺️ Próximos Passos

Conceitos avançados planejados:

- [ ] Ponteiros e aritmética de ponteiros
- [ ] Referências e passagem por referência
- [ ] Alocação dinâmica com `new` / `delete`
- [ ] Funções e escopo
- [ ] Structs e classes básicas
- [ ] Vetores dinâmicos (`std::vector`)
- [ ] Herança e polimorfismo
- [ ] Ponteiros inteligentes (`std::unique_ptr`, `std::shared_ptr`)

---

## 🔗 Referências Úteis

- **Documentação C++:** [cppreference.com](https://en.cppreference.com/)
- **CMake Documentation:** [cmake.org](https://cmake.org/cmake/help/)
- **Linux Mint Handbook:** [linuxmint.com](https://linuxmint.com/)

---

## 🤝 Contribuindo

Este é um repositório pessoal de estudo. Para sugestões:
- Abra uma [Issue](../../issues)
- Discuta novas ideias

---

## 📄 Licença

Repositório de uso pessoal para fins de estudo. Sem licença formal.

---

**Última atualização:** Maio 2026
**Autor:** asessagit
