#pragma once
#include <string>

namespace core::model {

class DataObject {
private:
    std::string id;
    std::string name;

public:
    DataObject(std::string id, std::string name);
    std::string getDescription() const;
};

} // namespace core::model