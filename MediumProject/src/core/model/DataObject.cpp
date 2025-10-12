#include "core/model/DataObject.h"

namespace core::model {

DataObject::DataObject(std::string id, std::string name)
    : id(std::move(id)), name(std::move(name)) {}

std::string DataObject::getDescription() const {
    return "ID: " + id + ", Name: " + name;
}

} // namespace core::model