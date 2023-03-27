#ifndef _GYMS_H_
#define _GYMS_H_
#include "dice.h"
#include "gameboard.h"
#include "ownable.h"
#include <memory>

class Gym : public Ownable {
  int calcRent();
  GameBoard *game;

public:
  Gym(std::string name, int cost, std::shared_ptr<Player> owner,
      GameBoard *game);
  void doOperation(std::shared_ptr<Player> curr) override;
  int getImprovs() override;
  void resetImprovs() override;
  int getImprovCost() override;
  void setImprovs(int amt) override;
};

#endif
