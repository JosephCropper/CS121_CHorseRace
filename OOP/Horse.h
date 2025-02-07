#pragma once
#ifndef HORSE_H
#define HORSE_H

namespace One{
 class Horse{
  public:
    int name;
    int horsePos;

    bool move(int flip);
    void printLane();
  };
}
#endif
