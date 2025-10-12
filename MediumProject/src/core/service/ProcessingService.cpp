#include "core/service/ProcessingService.h"
#include "core/util/StringUtils.h"
#include <iostream>

namespace core::service {

void ProcessingService::addObject(const model::DataObject& obj) {
    dataStore.push_back(obj);
}

void ProcessingService::processAndPrintData() {
    std::cout << "--- Processing Data ---" << std::endl;
    for (const auto& data : dataStore) {
        std::string description = data.getDescription();
        std::cout << "Original: " << description << std::endl;
        std::cout << "Processed: " << util::StringUtils::toUpperCase(description) << std::endl;
    }
    std::cout << "-----------------------" << std::endl;
}

} // namespace core::service