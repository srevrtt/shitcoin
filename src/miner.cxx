#include <iostream>
#include <string>
#include <vector>

#include "miner.h"
#include "block.h"

// Node's copy of the blockchain
std::vector<Block> blockchain;

static Block createGenesisBlock() {
  return Block(0, "tmp", "0");
}

void Miner::startMining() {
  blockchain.push_back(createGenesisBlock());
}
