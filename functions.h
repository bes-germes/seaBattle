//
// Created by olezh on 06.10.2022.
//

#ifndef SEABATTLE_FUNCTIONS_H
#define SEABATTLE_FUNCTIONS_H
#include <iostream>
#include <vector>
#include <ctime>
#include <map>

using namespace std;

class Ship{
public:

    vector<pair<int, int>> coord;

    vector<pair<int, int>> returnCoord() const;

    void deleteCoord(pair<int, int> deleteCoord);

    int lenght;

    Ship(pair<int, int> curCoord, int len, int dir);
    ~Ship();

    void deleteShip();

};
vector<pair<int, int>> checkShipsCol(vector<Ship> vs, const vector<pair<int, int>> &usedCoord);

vector<vector<int>> checkDamage(vector<vector<int>>& matrix, int x, int y);

vector<pair<int, int>> checkNear(vector<Ship> vs);

void draw(vector<Ship> ships);

vector<Ship> init();

vector<Ship> userBuildShips();

bool checkHit(const vector<Ship> &enemyTeam, const vector<pair<int, int>> &shootedEnemyCells);

void drawMatrix(const vector<vector<int>> &matrix);

bool endGame(const vector<pair<int, int>> &shootedEnemyCells, const vector<pair<int, int>> &shootedYourCells,
             const vector<Ship> &enemyTeam, const vector<Ship> &allyTeam);

void drawShipsAndHits(const vector<Ship>& allyTeam, vector<vector<int>> matrix, const vector<vector<int>>& matrixEnemy, bool drawShips);

void battle(const vector<Ship> &enemyTeam, const vector<Ship> &allyTeam);

vector<Ship> startGame();

#endif //SEABATTLE_FUNCTIONS_H
