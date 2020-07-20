#include <iostream>
#include "controller.h"
#include "game.h"
#include "player.h"
#include "scorehist.h"
#include "renderer.h"

int main() {

  Player player;
  ScoreHist scoreHist;

  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Game has terminated successfully!\n";
  string playerName = player.getName();
  int score = game.GetScore();
  int size = game.GetSize();
 // std::cout << "Player: " << playerName << "\n";
 // std::cout << "Score: " << score << "\n";
 // std::cout << "Size: " << size << "\n";
  scoreHist.write(playerName, score, size);
  scoreHist.printBest();

  return 0;
}