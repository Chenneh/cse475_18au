#include "Ambient1.h"
#include "Debug.h"
#include "Midi.h"

constexpr uint8_t Ambient1::_localWeights[];

uint8_t Ambient1::getNumRepeats() {
 return rand() % 4 + 1; // 1-4
}

void Ambient1::loop(uint32_t dt) {
Midi::setSound(4);
}

const uint8_t* Ambient1::getLocalWeights() {
  return this->_localWeights;
}

float Ambient1::getStartleFactor() {
  return 0.001f;
}
