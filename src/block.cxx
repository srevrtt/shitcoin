#include <iostream>
#include <string>
#include <chrono>

#include "block.h"

Block::Block(int idx, char *data, char *previousHash) {
  const auto time = std::chrono::system_clock::now();

  this->idx = idx;
  this->timestamp = std::chrono::duration_cast<std::chrono::seconds>(time.time_since_epoch()).count();
  this->data = data;
  this->previousHash = previousHash;
  this->hashVal = 0; // TODO: hash this
}
