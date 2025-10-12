#pragma once
#include "core/model/DataObject.h"
#include <vector>
#include <string>

namespace core::service {

class ProcessingService {
private:
    std::vector<model::DataObject> dataStore;

public:
    void addObject(const model::DataObject& obj);
    void processAndPrintData();
};

} // namespace core::service