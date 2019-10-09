#include "symbol_file_interface.hpp"

class SymbolMap;

class WlaSymbolFile : public SymbolFileInterface {
public:
  WlaSymbolFile() {}
  virtual ~WlaSymbolFile() {}

  const char *getName() const;
  const char *getDescription() const;

  int32_t scoreReadString(const nall::lstring &rows) const;
  bool read(const nall::lstring &rows, SymbolMap *map) const;

  nall::string filteredRow(const nall::string &input) const;

  uint32_t getFeatures() const;
};
