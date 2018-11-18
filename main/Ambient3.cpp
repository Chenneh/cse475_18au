#include "Ambient3.h"
#include "Debug.h"
#include "Midi.h"

constexpr uint8_t Ambient3::_localWeights[];

uint8_t Ambient3::getNumRepeats() {
 return rand() % 4 + 1; // 1 - 4
}

void Ambient3::loop(uint32_t dt) {
  Midi::setSound(6);
}

const uint8_t* Ambient3::getLocalWeights() {
  return this->_localWeights;
}

float Ambient3::getStartleFactor() {
  return 0.001f;
}
