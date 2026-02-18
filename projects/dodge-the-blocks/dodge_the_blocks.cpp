#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int playerX = 10;
int obstacleX, obstacleY;
int score = 0;
bool gameOver = false;
const int width = 20;
const int height = 20;

void Draw() {
    system("cls");

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == 0) cout << "#";

            if (y == height - 1 && x == playerX)
                cout << "A";
            else if (x == obstacleX && y == obstacleY)
                cout << "X";
            else
                cout << " ";

            if (x == width - 1) cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;
    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 'a' && playerX > 0) playerX--;
        if (ch == 'd' && playerX < width - 1) playerX++;
        if (ch == 'x') gameOver = true;
    }
}

void Logic() {
    obstacleY++;

    if (obstacleY >= height) {
        obstacleY = 0;
        obstacleX = rand() % width;
        score++;
    }

    if (obstacleY == height - 1 && obstacleX == playerX)
        gameOver = true;
}

int main() {
    srand(time(0));
    obstacleX = rand() % width;
    obstacleY = 0;

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(120);
    }

    cout << "Game Over. Final Score: " << score << endl;
    return 0;
}
