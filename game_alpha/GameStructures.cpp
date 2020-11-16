#include <iostream>
#include <cstdlib>
using namespace std;
// 
struct MainCharacter
{
    int row , col;
    char survival;
    char display;
    // 
    void setMainCharacter()
    {
        row = rand()%20, col=rand()%50;
        survival = 'y';
        display = '@';
    }
};

struct Enemy
{
    int row, col ;
    char survival;
    char display;
};

struct Enemies
{
  int row,col,dis;
  char shapes[4] = {'#','%','&'};
  struct Enemy Enemies[10];
// 
  void setEnemies()
  {
      for (int i = 0; i < 10; i++)
    {
        row = rand() % 20;
        col = rand() % 50;
        dis = rand() % 4;
        //   
        Enemies[i].row = row;
        Enemies[i].col = col;
        Enemies[i].survival = 'y';
        Enemies[i].display = shapes[dis];
    }
  }
};






