#include <iostream>

#include <OrderMatchingEngine/instrument.h>

int main() {
  Instrument x;
  Instrument y;
  std::cout << x.getInstrumentID() << std::endl;
  std::cout << y.getInstrumentID() << std::endl;

  return 0;
}
