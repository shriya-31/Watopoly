#include "controller.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc == 1) {
    Controller c;
    c.play(false);
  } else if (argc == 2) {
    Controller c{true};
    c.play(false);
  } else if (argc == 3) {
    Controller c;
    string filename = argv[2];
    c.loadGame(filename);
    c.play(true);
  } else if (argc == 4) {
    Controller c{true};
    string filename = argv[3];
    c.play(true);
  } else {
    cout << "Invalid Command Line Arguments Entered!\n";
  }
}
