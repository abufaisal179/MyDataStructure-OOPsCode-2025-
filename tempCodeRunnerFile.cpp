#include <iostream>
#include <conio.h>     // For _kbhit() and _getch()
#include <windows.h>   // For Sleep() and system("cls")
#include <cstdlib>     // For rand()
#include <ctime>       // For time()

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 20;
int score = 0;

int ballX, ballY;
int basketX = WIDTH / 2 - 3;
const int basketWidth = 7;

void setup() {
    srand(time(0));
    ballX = rand() % WIDTH;
    ballY = 0;
}

void draw() {
    system("cls");  // Clear console

    for (int i = 0; i < WIDTH + 2; i++) cout << "#";
    cout << "\n";

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == 0) cout << "#";

            if (x == ballX && y == ballY)
                cout << "O"; // Ball
            else if (y == HEIGHT - 1 && x >= basketX && x < basketX + basketWidth)
                cout << "="; // Basket
            else
                cout << " ";

            if (x == WIDTH - 1) cout << "#";
        }
        cout << "\n";
    }

    for (int i = 0; i < WIDTH + 2; i++) cout << "#";
    cout << "\nScore: " << score << "\n";
}

void input() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 'a' && basketX > 0)
            basketX--;
        else if (ch == 'd' && basketX < WIDTH - basketWidth)
            basketX++;
    }
}

void logic() {
    ballY++;

    if (ballY == HEIGHT - 1) {
        if (ballX >= basketX && ballX < basketX + basketWidth) {
            score++;
        }
        ballY = 0;
        ballX = rand() % WIDTH;
    }
}

int main() {
    setup();
    while (true) {
        draw();
        input();
        logic();
        Sleep(100);  // Delay
    }
    return 0;
}
