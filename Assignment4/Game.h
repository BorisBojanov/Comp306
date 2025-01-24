

#ifndef GAME_H
#define GAME_H
#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <iostream>

using namespace std;
class Game {

public:
    Game();
    void loadFiles(string targetFile);
    void setGameStart();
    void setGameEnd();
    void setGameWin();
    void getGameRunning();
};
#endif // GAME_H