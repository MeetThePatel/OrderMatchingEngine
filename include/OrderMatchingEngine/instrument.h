#pragma once

#include <OrderMatchingEngine/types.h>

class Instrument {
 private:
  UniqueID InstrumentID;
 protected:
  static UniqueID nextID;
 public:
  Instrument();

  [[nodiscard]]
  auto getInstrumentID () const -> UniqueID;
};