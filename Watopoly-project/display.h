#ifndef _DISPLAY_H
#define _DISPLAY_H
#include "gameboard.h"
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Display {
  shared_ptr<GameBoard> game;

public:
  Display(shared_ptr<GameBoard> game);
  void printDisplay();
  void printRowOne(const unordered_map<char, int> &players);
  void printRowTwo(const unordered_map<char, int> &players);
  void printRowThree(const unordered_map<char, int> &players);
  void printRowFour(const unordered_map<char, int> &players);
  void printRowFive(const unordered_map<char, int> &players);
  void printRowSix(const unordered_map<char, int> &players);
  void printRowSeven(const unordered_map<char, int> &players);
  void printRowEight(const unordered_map<char, int> &players);
  void printRowNine(const unordered_map<char, int> &players);
  void printRowTen(const unordered_map<char, int> &players);
  void printRowEleven(const unordered_map<char, int> &players);
};

#endif
