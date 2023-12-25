#pragma once

class Block {
private:
  int idx;
  long long timestamp;
  char *data;
  char *previousHash;
  char *hashVal;
public:
  Block(int idx, char *data, char *previousHash);
};
