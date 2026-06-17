# 🧠 Estudos em C++ — Fundamentos e Memória

[![Linguagem](https://img.shields.io/badge/linguagem-C%2B%2B-blue.svg)](https://en.cppreference.com/) [![CMake](https://img.shields.io/badge/build-CMake-green.svg)](https://cmake.org/) [![Kubernetes](https://img.shields.io/badge/orchestration-Kubernetes-blue.svg?logo=kubernetes&logoColor=white)](https://kubernetes.io/) [![Environment](https://img.shields.io/badge/env-Dev%20Container-orange.svg?logo=visualstudiocode&logoColor=white)](#-quick-start-ambiente-isolado-) [![License](https://img.shields.io/badge/license-Pessoal-yellow.svg)](#licença)

> Repositório de aprendizado focado em C++ com ênfase em controle de memória, estruturas de controle e compilação modular com CMake.

---

## ⚡ Quick Start (Ambiente Isolado ⭐)

Não perca tempo configurando compiladores locais. Este repositório utiliza **Dev Containers** para criar uma estação de trabalho dockerizada e idêntica em qualquer sistema operacional, eliminando o problema do "funciona na minha máquina, mas não na sua".

```bash
# 1. Clone o repositório
git clone https://github.com/asessagit/Cpp
cd c++

# 2. Reopen in Container (VSCode)
# Ou, localmente, compile:
cmake -S . -B build && cmake --build build

# 3. Execute um programa
./build/hello_world
```

Benefícios do Dev Container neste projeto:
* Zero setup manual: ferramentas e extensões já configuradas no container.
#* Isolamento total: n
o altera o ambiente host.
* Garantia de build: CMake, GCC/G++, Make e depuradores disponíveis.

---

## 📌 Motivação

C++ oferece algo que poucas linguagens oferecem: **controle direto sobre a máquina**. Este repositório explora esse controle na prática — desde como variáveis ocupam memória até como compiladores geram binários eficientes.

---

## 🌐 Visão de Futuro: Da Base aos Sistemas Distribuídos e IA

Esta trilha é projetada para evoluir do domínio de C++ e eficiência de hardware até arquiteturas distribuídas para inferência de IA escalável. Planos incluem:

* Integração com orquestração (Kubernetes) para workloads distribuídos.
* Uso de tecnologias abertas para acelerar IA (ex: Intel AMX, oneAPI) e reduzir vendor lock-in.
* Arquiteturas de inferência eficientes em CPU e aceleradores alternativos.

Para um resumo técnico sobre aceleradores eficientes da Intel (AMX, Gaudi, oneAPI) e impactos em consumo energético e TCO, veja docs/intel-ai.md (referência oficial: https://www.intel.com/content/www/us/en/products/docs/accelerator-engines/enterprise-ai.html).

---

## 📂 Estrutura do Projeto

```
c++/
 .devcontainer/       # Configuração do ambiente
 .vscode/             # Configurações do VSCode
 src/                 # Código-fonte C++ estruturado
   ├── hello_world.cpp
   ├── if.cpp
   ├── for.cpp
   ├── while.cpp
   ├── vec.cpp
   └── mat.cpp
 build/               # Artefatos compilados (gerado)
 docs/                # Documentação adicional
 CMakeLists.txt       # Configuração CMake
 README.md
```

---

## 🧩 Programas Disponíveis

| Programa      | Descrição                                              | Nível   | Foco de Engenharia |
|---------------|--------------------------------------------------------|---------|--------------------|
| `hello_world` | Saída básica com `std::cout`                           | 🟢 Básico | Ponto de entrada   |
| `if`          | Estruturas condicionais e decisão                      | 🟢 Básico | Desvios condicionais |
| `for`         | Laço `for` com iteração                                | 🟢 Básico | Iteração sequencial |
| `while`       | Laço `while` com condição                              | 🟢 Básico | Controle de fluxo   |
| `vec`         | Vetores estáticos e alocação                           | 🟡 Intermediário | Localidade de dados |
| `mat`         | Matrizes 2D e operações                                | 🟡 Intermediário | Álgebra linear de baixa latência |

---

## 🚀 Como Compilar e Executar

### Opção 1: CMake + Make (Terminal)

```bash
mkdir build
cd build
cmake ..
make
# Execute
./hello_world
```

### Opção 2: CMake (Uma linha)

```bash
cmake -B build && cmake --build build
cd build
./hello_world
```

### Opção 3: VSCode com Run Task (Recomendado)

1. `Ctrl+Shift+B` → `CMake: build all`
2. `Ctrl+Shift+P` → `Run Task` → escolha o executável
3. Use `F5` para depuração

---

## 📘 Conceitos Estudados

- Saída e entrada — `std::cout`, `std::cin`
- Condicionais — `if`, `else`
- Laços — `for`, `while`
- Vetores e matrizes — organização em memrrria e impacto no cache
- CMake — geração de múltiplos targets
- Debug com VSCode — breakpoints e stepping

---

## 🛠️ Pré-requisitos

### Linux (Ubuntu/Debian)

```bash
sudo apt-get update && sudo apt-get install -y cmake build-essential gdb
```

### macOS

```bash
brew install cmake gcc
```

### Windows

Recomendado via WSL2 ou instalar `cmake` e `mingw-w64`.

---

## 🗺️ Próximos Passos

- [ ] Ponteiros e aritmética de ponteiros
- [ ] Referências e passagem por referência
- [ ] Alocação dinâmica (`new` / `delete`)
- [ ] Funções, structs e classes básicas
- [ ] Vetores dinâmicos (`std::vector`)
- [ ] Ponteiros inteligentes (`std::unique_ptr`, `std::shared_ptr`)
- [ ] Orquestração com Kubernetes — deploy, Helm, e padrões para workloads distribuídos (microservices)
- [ ] Integração com pipelines de IA usando tecnologias Intel (AMX, oneAPI) e aceleração em CPU/Gaudi-style accelerators

---

## 🤝 Contribuindo

Este é um repositório pessoal de estudo. Para sugestões: abra uma Issue.

---

## 📄 Licença

Repositório de uso pessoal para fins de estudo. Sem licença formal.

---

**Última atualização:** 2026-06-17
**Autor:** asessagit (Alex Sessa)
