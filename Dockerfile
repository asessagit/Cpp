FROM mcr.microsoft.com/devcontainers/cpp:latest

RUN apt-get update && apt-get install -y \
    valgrind \
    clang-format-17 \
    && rm -rf /var/lib/apt/lists/*



