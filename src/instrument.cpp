#include <OrderMatchingEngine/instrument.h>

UniqueID Instrument::nextID = 0;

Instrument::Instrument() {
  InstrumentID = ++nextID;
}

auto Instrument::getInstrumentID() const -> UniqueID {
  return InstrumentID;
}
