
<br>

<div align="center"\>
    <img width="1024" height="256" alt="image" src="https://github.com/user-attachments/assets/17a63f4e-0298-44a2-9de8-653bbb1e9f82" />

</div>

<br>

-----

<div align="center"\>
    <strong\>Um template completo para projetos C++ utilizando CMake, com organização modular, testes e exemplos.</strong\>
</div>

<br>

<div align="center">
  <img src="https://img.shields.io/github/license/OfAndreS/CmakeTemplate?style=for-the-badge" alt="Licença">
  <img src="https://img.shields.io/github/stars/OfAndreS/CmakeTemplate?style=for-the-badge" alt="Stars">
  <img src="https://img.shields.io/github/forks/OfAndreS/CmakeTemplate?style=for-the-badge" alt="Forks">
  <img src="https://img.shields.io/github/last-commit/OfAndreS/CmakeTemplate?style=for-the-badge" alt="Último Commit">
</div>

<br>

<p align="center">
  <a href="#estrutura-do-projeto">Estrutura do Projeto</a> •
  <a href="#tecnologias">Tecnologias</a> •
  <a href="#como-executar">Como Executar</a> •
</p>

-----

<br>

|**Sobre o Projeto**|
|-|
|O CmakeTemplate é um repositório que serve como um ponto de partida robusto para projetos C++. Ele oferece uma estrutura organizada para aplicações de pequeno e médio porte, demonstrando práticas modernas de C++ e CMake. O template inclui exemplos de como modularizar o código em bibliotecas, gerenciar recursos, adicionar testes com CTest e configurar o ambiente de compilação para ser multiplataforma.|

<br>

-----

<br>

| **Funcionalidades** |
|---|
| <p align="justify">  Estrutura Modular: <br> <br> - Organiza o código-fonte em diretórios `src` e `include`, separando a implementação dos cabeçalhos. </p> |
| <p align="justify"> Dois Exemplos de Projeto: <br> <br> - **SmallProject:** Um exemplo básico para demonstrar a configuração mínima, incluindo o carregamento de arquivos de recursos. <br> - **MediumProject:** Um projeto mais elaborado que divide a lógica em uma biblioteca estática (`core`) e um executável, além de incluir um conjunto de testes. </p> |
| <p align="justify"> Gerenciamento de Recursos: <br> <br> - Demonstra como acessar arquivos externos (como `welcome.txt`) de dentro do código C++ através de macros definidas no CMake. </p> |
| <p align="justify"> Testes Automatizados: <br> <br> - O `MediumProject` inclui um diretório `tests` com um exemplo de como configurar e executar testes usando o CTest, o framework de testes do CMake. </p> |
| <p align="justify"> Configuração Multiplataforma: <br> <br> - O CMakeLists.txt inclui configurações para garantir a compilação em diferentes ambientes, como a ligação estática do runtime no Windows (MSVC). </p> |

<br>

-----

<br>

## **Estrutura do Projeto**

<br>

O template é dividido em dois subprojetos para ilustrar diferentes níveis de complexidade.

**SmallProject:**

```bash
SmallProject/
├── Cmakelists.txt      # Arquivo de build do projeto
├── include/
│   └── appUtils.h      # Cabeçalho de uma função utilitária
├── resources/
│   └── file.txt        # Arquivo de recurso
└── src/
    ├── appUtils.cpp    # Implementação da função utilitária
    └── main.cpp        # Ponto de entrada da aplicação
```

**MediumProject:**

```bash
MediumProject/
├── CMakeLists.txt      # Arquivo de build principal
├── include/
│   └── core/
│       ├── model/
│       ├── service/
│       └── util/
├── src/
│   ├── core/
│   │   ├── model/
│   │   ├── service/
│   │   └── util/
│   └── main.cpp        # Ponto de entrada que usa a biblioteca 'core'
└── tests/
    ├── CMakeLists.txt  # Arquivo de build para os testes
    └── test_ProcessingService.cpp # Código do teste
```

<br>

## **Tecnologias**

<br>

| Ferramenta | Descrição |
|-----------|----------------------------------------------------------------|
| **C++** | Linguagem de programação principal utilizada, com o padrão C++17. |
| **CMake** | Sistema de automação de build utilizado para compilar e gerenciar o projeto de forma multiplataforma. |

<br>

## **Como Executar**

<br>

Para compilar e executar uma cópia local de um dos projetos, siga os passos abaixo.

<details>
  <summary><strong>Pré-requisitos</strong></summary>

  - Você vai precisar do **CMake** (versão 3.15 ou superior) instalado.
  - Um compilador C++ que suporte C++17 (GCC, Clang, MSVC, etc.).
  - Git para clonar o repositório.

</details>

<details>
  <summary><strong>Rodando a Aplicação</strong></summary>

<br>

1 ) **Clone o repositório:**

```bash
git clone <URL_DO_SEU_REPOSITORIO>
```

2 ) **Navegue até o diretório de um dos projetos (`SmallProject` ou `MediumProject`):**

```bash
cd CmakeTemplate/SmallProject
```

3 ) **Crie um diretório de build e entre nele:**

```bash
mkdir build && cd build
```

4 ) **Gere os arquivos de build com o CMake:**

```bash
cmake ..
```

5 ) **Compile o projeto:**

```bash
cmake --build .
```

6 ) **Execute o programa gerado (o nome pode variar com base no `project()` definido no CMakeLists.txt):**

```bash
# No Linux/macOS
./YourProjectName

# No Windows
YourProjectName.exe
```

</details>
