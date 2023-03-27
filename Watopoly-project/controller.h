#ifndef __CONTROLLER_H
#define __CONTROLLER_H
#include <fstream>
#include <memory>
#include <string>
#include <vector>

using namespace std;

class GameBoard;
class Player;
class Display;

class Controller {
  shared_ptr<GameBoard> game;
  vector<string> validCommands;
  bool testingMode;
  bool isValidCommand(string command);
  shared_ptr<Display> d;

public:
  Controller(bool testingMode = false);
  void init(vector<shared_ptr<Player>> players);
  void loadGame(string filename);
  void saveGame(string filename);
  void roll();
  void bigFive();
  void assets(shared_ptr<Player> player);
  void all();
  void play(bool alreadyInit);
};
#endif
