#include "core/service/ProcessingService.h"
#include "core/model/DataObject.h"
#include <iostream>

int main() {
    // 1. Criar o serviço que contém a lógica de negócio
    core::service::ProcessingService service;

    // 2. Criar alguns objetos de dados (model)
    core::model::DataObject obj1("001", "First Item");
    core::model::DataObject obj2("002", "Second Item");

    // 3. Usar o serviço para adicionar e processar os dados
    service.addObject(obj1);
    service.addObject(obj2);
    service.processAndPrintData();

    std::cout << "Application finished." << std::endl;

    return 0;
}