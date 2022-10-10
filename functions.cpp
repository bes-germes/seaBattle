//
// Created by olezh on 06.10.2022.
//
#include "functions.h"

string diff;

vector<pair<int, int>> Ship::returnCoord() const {
    return coord;
}

Ship::Ship(pair<int, int> curCoord, int len, int dir) {
    lenght = len;
    switch (len) {
        default:
            break;
        case 1:
            coord.push_back(curCoord);
            break;
        case 2:
            if (dir == 0) { // o-left, 1- right, 2- up, 3-down
                pair<int, int> nextCoord;
                if (curCoord.first - 1 < 0) {
                    curCoord.first++;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first - 1;
                nextCoord.second = curCoord.second;
                coord.push_back(nextCoord);

            }
            if (dir == 1) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.first + 1 > 9) {
                    curCoord.first--;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first + 1;
                nextCoord.second = curCoord.second;
                coord.push_back(nextCoord);

            }
            if (dir == 2) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.second - 1 < 0) {
                    curCoord.second++;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second - 1;
                coord.push_back(nextCoord);

            }
            if (dir == 3) { // o-left, 1- right, 2- up, 3-down
                pair<int, int> nextCoord;
                if (curCoord.second + 1 > 9) {
                    curCoord.second--;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second + 1;
                coord.push_back(nextCoord);
            }
            break;
        case 3:
            if (dir == 0) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.first - 2 < 0) {
                    curCoord.first += 2;
                }
                coord.push_back(curCoord);
                nextCoord.second = curCoord.second;
                nextCoord.first = curCoord.first - 1;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first - 2;
                coord.push_back(nextCoord);

            }
            if (dir == 1) { // o-left, 1- right, 2- up, 3-down
                pair<int, int> nextCoord;
                if (curCoord.first + 2 > 9) {
                    curCoord.first -= 2;
                }
                coord.push_back(curCoord);
                nextCoord.second = curCoord.second;
                nextCoord.first = curCoord.first + 1;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first + 2;
                coord.push_back(nextCoord);

            }
            if (dir == 3) { // o-left, 1- right, 2- up, 3-down

                std::pair<int, int> nextCoord;
                if (curCoord.second + 2 > 9) {
                    curCoord.second -= 2;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second + 1;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second + 2;
                coord.push_back(nextCoord);

            }
            if (dir == 2) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.second - 2 < 0) {
                    curCoord.second += 2;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second - 1;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second - 2;
                coord.push_back(nextCoord);

            }
            break;
        case 4:
            if (dir == 0) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.first - 3 < 0) {
                    curCoord.first += 3;
                }
                coord.push_back(curCoord);
                nextCoord.second = curCoord.second;
                nextCoord.first = curCoord.first - 1;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first - 2;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first - 3;
                coord.push_back(nextCoord);

            }
            if (dir == 1) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.first + 3 > 9) {
                    curCoord.first -= 3;
                }
                coord.push_back(curCoord);
                nextCoord.second = curCoord.second;
                nextCoord.first = curCoord.first + 1;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first + 2;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first + 3;
                coord.push_back(nextCoord);

            }
            if (dir == 3) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.second + 3 > 9) {
                    curCoord.second -= 3;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second + 1;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second + 2;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second + 3;
                coord.push_back(nextCoord);

            }
            if (dir == 2) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.second - 3 < 0) {
                    curCoord.second += 3;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second - 1;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second - 2;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second - 3;
                coord.push_back(nextCoord);

            }
            break;
        case 5:
            if (dir == 0) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.first - 4 < 0) {
                    curCoord.first += 4;
                }
                coord.push_back(curCoord);
                nextCoord.second = curCoord.second;
                nextCoord.first = curCoord.first - 1;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first - 2;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first - 3;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first - 4;
                coord.push_back(nextCoord);

            }
            if (dir == 1) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.first + 4 > 9) {
                    curCoord.first -= 4;
                }
                coord.push_back(curCoord);
                nextCoord.second = curCoord.second;
                nextCoord.first = curCoord.first + 1;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first + 2;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first + 3;
                coord.push_back(nextCoord);
                nextCoord.first = curCoord.first + 4;
                coord.push_back(nextCoord);

            }
            if (dir == 3) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.second + 4 > 9) {
                    curCoord.second -= 4;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second + 1;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second + 2;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second + 3;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second + 4;
                coord.push_back(nextCoord);

            }
            if (dir == 2) { // o-left, 1- right, 2- up, 3-down

                pair<int, int> nextCoord;
                if (curCoord.second - 4 < 0) {
                    curCoord.second += 4;
                }
                coord.push_back(curCoord);
                nextCoord.first = curCoord.first;
                nextCoord.second = curCoord.second - 1;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second - 2;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second - 3;
                coord.push_back(nextCoord);
                nextCoord.second = curCoord.second - 4;
                coord.push_back(nextCoord);

            }
            break;
    }
}

void Ship::deleteCoord(pair<int, int> deleteCoord) {
    //vector<pair<int, int>> newCoord;
    for (int i = 0; i < this->coord.size(); i++){
        if (deleteCoord == this->coord[i]){
            this->coord.erase(this->coord.cbegin() + i);
        }
    }
}

Ship::~Ship() = default;

void Ship::deleteShip() {
    if (this->coord.empty()){
        delete this;
    }
}


vector<pair<int, int>> checkShipsCol(vector<Ship> vs, const vector<pair<int, int>> &usedCoord) {

    vector<pair<int, int>> res;

    for (const auto &j : usedCoord) {
        for (int i = 0; i < vs[vs.size() - 1].lenght; i++) {
            if (vs[vs.size() - 1].coord[i] == j) {
                res.push_back(j);
            }
        }
    }
    return res;
}

//vector<vector<int>> checkDamage(vector<vector<int>>& matrix, int x, int y){
//
//
//}

vector<pair<int, int>> checkNear(vector<Ship> vs) {
    vector<pair<int, int>> res;

    for (auto &ship : vs) {
        for (int i = 0; i < ship.lenght; i++) {
            res.push_back(ship.coord[i]);
            pair<int, int> nextCoord;
            nextCoord.first = ship.coord[i].first + 1;
            nextCoord.second = ship.coord[i].second;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first - 1;
            nextCoord.second = ship.coord[i].second;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first;
            nextCoord.second = ship.coord[i].second + 1;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first;
            nextCoord.second = ship.coord[i].second - 1;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first + 1;
            nextCoord.second = ship.coord[i].second + 1;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first - 1;
            nextCoord.second = ship.coord[i].second - 1;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first - 1;
            nextCoord.second = ship.coord[i].second + 1;
            res.push_back(nextCoord);
            nextCoord.first = ship.coord[i].first + 1;
            nextCoord.second = ship.coord[i].second - 1;
            res.push_back(nextCoord);
        }
    }

    return res;
}

void draw(vector<Ship> ships) {
    bool matrix[10][10];

    for (auto &i : matrix) {
        for (bool &j : i) {
            j = false;
        }
    }
    for (auto &ship : ships) {
        for (int j = 0; j < ship.lenght; j++) {
            matrix[ship.coord[j].first][ship.coord[j].second] = true;
        }
    }

    char letter = 'a';
    cout << "  ";
    for (int i = 0; i < 10; i++) {
        cout << "#" << char(letter + i);
    }
    cout << endl;
    int count = 0;
    for (auto &i : matrix) {
        cout << count << "#";
        for (bool j : i) {
            cout << "|" << (j ? "%" : "0");
        }
        cout << "|" << endl;
        count++;
    }

//    for (int i = 0, count = 1; i < ships.size(); i++, count++) {
//        cout << count << ": ";
//        for (int j = 0; j < ships[i].lenght; j++) {
//            cout << ships[i].coord[j].first << " " << ships[i].coord[j].second << " ";
//        }
//        cout << endl;
//    }
}

vector<Ship> init() {
    vector<pair<int, int>> usedCoord;
    vector<pair<int, int>> shipCoord;
    vector<Ship> ships;

    srand(time(nullptr));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            pair<int, int> curCoord{rand() % 10, rand() % 10};
            ships.push_back(Ship(curCoord, i + 1, rand() % 4));
            if (ships.size() > 1) {

                while (!checkShipsCol(ships, usedCoord).empty()) {
                    ships.pop_back();
                    curCoord.first = rand() % 10;
                    curCoord.second = rand() % 10;
                    ships.push_back(Ship(curCoord, i + 1, rand() % 4));
                }
                usedCoord = checkNear(ships);
            } else {
                usedCoord = checkNear(ships);
                //copy(checkNear(ships,usedCoord).begin(), checkNear(ships,usedCoord).end(), usedCoord);
            }
        }
    }
    return ships;
}

vector<Ship> userBuildShips() {
    vector<pair<int, int>> usedCoord;
    vector<pair<int, int>> shipCoord;
    vector<Ship> ships;

    srand(time(nullptr));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            bool flag = true;
            while (flag) {
                cin.sync();
                //cout << "Size " << i + 1 << endl;
                cout << "Enter pos and direction(example: a01)(dir: 0-left, 1- right, 2- up, 3-down). Size of the Ship:"
                     << i + 1 << endl;
                unsigned char letter, userCoord, userDir;
                cin >> letter >> userCoord >> userDir;
                int x = int(letter) - 97;
                if ((x < 0) || (x > 9)) {
                    cout << "wrong x" << endl;
                    continue;
                }
                int y = int(userCoord) - 48;
                if ((y < 0) || (y > 9)) {
                    cout << "wrong y" << endl;
                    continue;
                }
                int dir = int(userDir) - 48;
                if ((dir < 0) || (dir > 3)) {
                    cout << "wrong dir" << endl;
                    continue;
                }

                pair<int, int> curCoord{x, y};
                ships.push_back(Ship(curCoord, i + 1, dir));
                if (ships.size() > 1) {

                    if (!checkShipsCol(ships, usedCoord).empty()) {
                        ships.pop_back();
                        cout << "coord already used or collision" << endl;
                        continue;
                    }
                    usedCoord = checkNear(ships);
                } else {
                    usedCoord = checkNear(ships);
                    //copy(checkNear(ships,usedCoord).begin(), checkNear(ships,usedCoord).end(), usedCoord);
                }
                flag = false;
            }
            draw(ships);
        }
    }
    return ships;
}

bool checkHit(const vector<Ship> &enemyTeam, const vector<pair<int, int>> &shootedEnemyCells) {

    bool hit = false;
    bool miss = false;
    auto shoot = shootedEnemyCells[shootedEnemyCells.size() - 1];

    for (const auto &ship : enemyTeam) {
        for (auto coord : ship.coord) {
            if (shoot == coord) {
                return true;
            }
        }
    }
    return false;
}

void drawMatrix(const vector<vector<int>> &matrixAlly, const vector<vector<int>> &matrixEnemy) {

    vector<vector<int>> finalMatrix;
    vector<int> row;
    row.reserve(21);
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            row.push_back(matrixAlly[i][j]);
        }
        row.push_back(-5);
        for (int j = 0; j < 10; j++){
            row.push_back(matrixEnemy[i][j]);
        }
        finalMatrix.push_back(row);
        row.clear();
    }

    char let = 'a';
    cout << "  ";
    for (int i = 0; i < 10; i++) {
        cout << "#" << char(let + i);
    }
    cout << " ";
    for (int i = 0; i < 10; i++) {
        cout << "#" << char(let + i);
    }
    cout << endl;
    int count = 0;
    for (const auto &i : finalMatrix) {
        cout << count << "#";
        int space = 0;
        for (auto j : i) {
            auto h = "0";
            switch (j) {
                case (1):

                    h = "x";
                    break;
                case (-1):
                    h = "*";
                    break;
                case (2):
                    h = "%";
                    break;
                default:
                    break;
            }
            space == 10 ? cout << " " : cout << "|" << h;
            //cout << "|" << h;
            space++;
        }
        cout << "|" << endl;
        count++;
    }

}

bool endGame(const vector<pair<int, int>> &shootedEnemyCells, const vector<pair<int, int>> &shootedYourCells,
             const vector<Ship> &enemyTeam, const vector<Ship> &allyTeam) {

    int enemyPoints = 0;
    int allyPoints = 0;
    for (const auto &ship : enemyTeam) {
        for (auto coord : ship.coord) {
            for (auto cell : shootedEnemyCells) {//1*4 + 2*3 + 3*2 + 4*1 = 4 + 6 + 6 + 4 = 20
                if (cell == coord) {
                    enemyPoints++;
                }
            }
        }
    }

    for (const auto &ship : allyTeam) {
        for (auto coord : ship.coord) {
            for (auto cell : shootedYourCells) {//1*4 + 2*3 + 3*2 + 4*1 = 4 + 6 + 6 + 4 = 20
                if (cell == coord) {
                    allyPoints++;
                }
            }
        }
    }

    if (enemyPoints == 20) {
        cout << "you won" << endl;
        return false;
    }
    if (allyPoints == 20) {
        cout << "bot won" << endl;
        return false;
    }
    return true;
};

void drawShipsAndHits(const vector<Ship>& allyTeam, vector<vector<int>> matrix, const vector<vector<int>>& matrixEnemy, bool drawShips) {

    vector<vector<int>> showMatrix;
    vector<int> showRow;
    showRow.reserve(10);
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            showRow.push_back(0);
        }
        showMatrix.push_back(showRow);
        showRow.clear();
    }

    if (drawShips) {
        for (auto &ship : allyTeam) {
            for (auto curCoord : ship.coord) {
                showMatrix[curCoord.first][curCoord.second] = 2;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (matrix[j][i] != 0) {
                showMatrix[i][j] = matrix[j][i];
            }
        }
    }

    drawMatrix(showMatrix, matrixEnemy);
}

vector<pair<int, int>> addShootNext(pair<int, int>& shootToAdd){

    vector<pair<int, int>> res;
    res.reserve(4);
    pair<int, int> addCoord{shootToAdd.first, shootToAdd.second};
    addCoord.second += 1;
    if (addCoord.second <= 9)
        res.push_back(addCoord);
    addCoord.second -= 2;
    if (addCoord.second >= 0)
        res.push_back(addCoord);
    addCoord.first -= 1;
    addCoord.second += 1;
    if (addCoord.second <= 9 || addCoord.first >= 0)
        res.push_back(addCoord);
    addCoord.first += 2;
    if (addCoord.first <= 9)
        res.push_back(addCoord);



    return res;
}

vector<vector<int>> markDestroyShipNear(const vector<Ship>& shipTeam, const vector<pair<int, int>>& shootedCells, vector<vector<int>> showMatrix){

    vector<pair<int, int>> res;
    for (const auto& ship : shipTeam){
        int compare = 0;
        for (auto cell : ship.coord){
            for (auto shot : shootedCells){
                if (shot == cell){
                    compare++;
                }
            }
            if (compare == ship.lenght){
                res.reserve(4 * ship.lenght);
                for (int i = 0; i < ship.lenght; i++) {
                    pair<int, int> addCoord{ship.coord[i].first, ship.coord[i].second};
                    addCoord.second += 1;
                    if (addCoord.second <= 9)
                        res.push_back(addCoord);
                    addCoord.second -= 2;
                    if (addCoord.second >= 0)
                        res.push_back(addCoord);
                    addCoord.first -= 1;
                    addCoord.second += 1;
                    if (addCoord.second <= 9 || addCoord.first >= 0)
                        res.push_back(addCoord);
                    addCoord.first += 2;
                    if (addCoord.first <= 9)
                        res.push_back(addCoord);
                    addCoord.second += 1;
                    if (addCoord.second <= 9)
                        res.push_back(addCoord);
                    addCoord.second -= 2;
                    if (addCoord.second >= 0)
                        res.push_back(addCoord);
                    addCoord.first -= 2;
                    if (addCoord.first >= 0)
                        res.push_back(addCoord);
                    addCoord.second += 2;
                    if (addCoord.second <= 9)
                        res.push_back(addCoord);
                }
            }
        }
    }
    for (auto curCell : res){
        if (showMatrix[curCell.second][curCell.first] == 0) {
            showMatrix[curCell.second][curCell.first] = -1;
        }
    }
    return showMatrix;
}

void battle(const vector<Ship>& enemyTeam, const vector<Ship> &allyTeam) {
    bool battle = true;
    bool yourTurn = true;
    bool enemyTurn = false;

    vector<pair<int, int>> shootedEnemyCells;
    vector<pair<int, int>> shootedYourCells;

    vector<vector<int>> matrixAlly;
    vector<int> rowAlly;

    vector<vector<int>> matrixEnemy;
    vector<int> rowEnemy;

    vector<pair<int, int>> finishCells;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            rowEnemy.push_back(0);
            rowAlly.push_back(0);
        }
        matrixEnemy.push_back(rowEnemy);
        matrixAlly.push_back(rowAlly);
        rowEnemy.clear();
        rowAlly.clear();
    }

    while (endGame(shootedEnemyCells, shootedYourCells, enemyTeam, allyTeam)) {
        while (yourTurn) {
            unsigned char letter, userCoord;
            cin >> letter >> userCoord;
            int x = int(letter) - 97;
            if ((x < 0) || (x > 9)) {
                cout << "wrong x" << endl;
                break;
            }
            int y = int(userCoord) - 48;
            if ((y < 0) || (y > 9)) {
                cout << "wrong y" << endl;
                break;
            }
            pair<int, int> curCoord{x, y};

            matrixEnemy[y][x] = 0;

            if (shootedEnemyCells.size() > 1) {
                for (auto oldCoord : shootedEnemyCells) {
                    if (curCoord == oldCoord) {
                        cout << "already shooted" << endl;
                        break;
                    }
                }
            }

            shootedEnemyCells.push_back(curCoord);

            if (checkHit(enemyTeam, shootedEnemyCells)) {
                matrixEnemy[y][x] = 1;
            }
            else
                matrixEnemy[y][x] = -1;

            matrixEnemy = markDestroyShipNear(enemyTeam, shootedEnemyCells, matrixEnemy);

            yourTurn = false;
            enemyTurn = true;
        }
        while (enemyTurn) {
            int x;
            int y;
            pair<int, int> curCoord;

            if (diff == "h") {
                if (!finishCells.empty()) {
                    curCoord = finishCells[finishCells.size() - 1];

                    bool compare = false;

                    for (auto cell : shootedYourCells) {
                        if (curCoord == cell) {
                            compare = true;
                        }
                    }

                    if (!compare) {
                        shootedYourCells.push_back(curCoord);
                    }

                    x = curCoord.first;
                    y = curCoord.second;
                    finishCells.pop_back();
                } else {
                    x = rand() % 10;
                    y = rand() % 10;
                    curCoord.first = x;
                    curCoord.second = y;

                    shootedYourCells.push_back(curCoord);

                    while (curCoord != shootedYourCells[shootedYourCells.size() - 1]) {
                        x = rand() % 10;
                        y = rand() % 10;
                        curCoord.first = x;
                        curCoord.second = y;
                    }
                }
            }else{
                x = rand() % 10;
                y = rand() % 10;
                curCoord.first = x;
                curCoord.second = y;

                shootedYourCells.push_back(curCoord);

                while (curCoord != shootedYourCells[shootedYourCells.size() - 1]) {
                    x = rand() % 10;
                    y = rand() % 10;
                    curCoord.first = x;
                    curCoord.second = y;
                }
            }
            matrixAlly[y][x] = 0;

            if (checkHit(allyTeam, shootedYourCells)) {
                matrixAlly[y][x] = 1;
                finishCells = addShootNext(curCoord);
            }
            else {
                matrixAlly[y][x] = -1;
            }

            yourTurn = true;
            enemyTurn = false;
        }
        cout << "ally field" << "             " << "enemy field"  << endl;
        drawShipsAndHits(allyTeam, matrixAlly, matrixEnemy, true);
    }
}

vector<Ship> startGame(){
    bool flag = true;
    string answer;

    while (flag) {
        cout << "Would you like to put your ships by random?\n y/n" << endl;
        cin >> answer;
        if (answer != "y" && answer != "n") {
            cout << "wrong answer" << endl;
            continue;
        }
        cout << "Choose difficult. Hard or easy. Write h/e" << endl;
        cin >> answer;
        diff = answer;
        if (answer != "h" && answer != "e") {
            cout << "wrong answer" << endl;
            continue;
        }
        flag = false;
    }
    vector<Ship> res;
    bool accept = true;
    while (accept) {
        answer != "y" ? res = init() : res = userBuildShips();
        draw(res);
        cout << "okey?\n y/n" << endl;
        string okey;
        cin >> okey;
        if (okey != "y" && okey != "n"){
            cout << "wrong enter" << endl;
            continue;
        }
        if (okey == "y")
            accept = false;
    }
    if (answer != "y"){
        cout << "Battle begin. Write coordinates, for example a0" << endl;
    }
    return res;
}