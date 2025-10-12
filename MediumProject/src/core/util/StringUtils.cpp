#include "core/util/StringUtils.h"
#include <algorithm>
#include <string>

namespace core::util {

std::string StringUtils::toUpperCase(const std::string& str) {
    std::string upper_str = str;
    std::transform(upper_str.begin(), upper_str.end(), upper_str.begin(),
                   [](unsigned char c) { return std::toupper(c); });
    return upper_str;
}

} // namespace core::util