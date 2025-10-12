#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>

// Inclui o nosso cabeçalho com funções de utilidade
#include "appUtils.h"

int main() {
    // 1. Chamar uma função de outro ficheiro
    std::cout << get_greeting_message() << std::endl;

    // 2. Ler um ficheiro da pasta de recursos usando a macro do CMake
    std::ifstream resource_file(RESOURCES_PATH "welcome.txt");
    if (!resource_file) {
        std::cerr << "Error: Could not open resource file." << std::endl;
        return 1;
    }

    // Lê o conteúdo completo do ficheiro para uma string
    std::string content((std::istreambuf_iterator<char>(resource_file)),
                         std::istreambuf_iterator<char>());

    std::cout << "Message from resource file: " << content << std::endl;

    // Pausa a consola no Windows para ver a saída
    std::cout << "Press Enter to exit...";
    std::cin.get();

    return 0;
}