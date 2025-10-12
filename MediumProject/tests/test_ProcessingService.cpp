#include "core/service/ProcessingService.h"
#include "core/model/DataObject.h"
#include <cassert>
#include <iostream>

// Teste simples para garantir que a lógica funciona como esperado
void testService() {
    core::service::ProcessingService service;
    service.addObject(core::model::DataObject("test", "data"));
    // Um teste real aqui verificaria o estado interno ou a saída.
    // Para este exemplo, apenas executamos o método.
    service.processAndPrintData();
    std::cout << "Service test executed successfully." << std::endl;
}

int main() {
    testService();
    return 0;
}