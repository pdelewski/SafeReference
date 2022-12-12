#pragma once

#include <map>
#include <utility>

namespace ucore {
struct resource {
  resource() : counter(0) {}
  int counter;
#ifdef DEBUG
  std::map<size_t, std::pair<std::string, size_t>> aliases_locations;
  std::pair<std::string, size_t> owner_location;
#endif
};
}  // namespace ucore