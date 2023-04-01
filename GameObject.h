#include <iostream>
#include <windows.h>
using namespace std;
int remover_tail, bar_head = 50, remover_head, bar_tail = 70, rem_life = 5, Score = 0, user_bullet_x = 0, user_bullet_y = 0;

void gotoxy(short x, short y)
{
    COORD jafar = {x, y};
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), jafar);
}

void The_End()
{
    system("cls");
    int c;
    for (c = 1; c <= 109; c++)
    {
        gotoxy(c, 0);
        cout << "$";
    }

    for (c = 1; c <= 27; c++)
    {
        gotoxy(0, c);
        cout << "$";
    }
    for (c = 1; c <= 109; c++)
    {
        gotoxy(c, 27);
        cout << "$";
    }

    for (c = 1; c <= 27; c++)
    {
        gotoxy(110, c);
        cout << "$";
    }
    gotoxy(40, 14);
    cout << "Your Scored Points: " << Score;
    gotoxy(40, 15);
    if (Score >= 10)
        cout << "Well Done! You are Good at Shooting Stuff.";
    else if (Score >= 5 && Score < 10)
        cout << "Good Effort! but it Certainly can be improved.";
    else
        cout << "No Shame in Loosing. But Sometimes We Should feel some. Try Again.";
    gotoxy(0, 30);
}
void Monitor()
{
    if (rem_life == 0)
        exit(0);
}

class GameObject
{
public:
    int x_coordinate_head;
    int y_coordinate_head;
    int x_coordinate_tail;
    int y_coordinate_tail;
    int width;
    int hieght;
    int velocity;

public:
    GameObject() : x_coordinate_head(0), y_coordinate_head(0), x_coordinate_tail(0), y_coordinate_tail(0), width(0), hieght(0), velocity(0){};
    GameObject(int x_coordinate_head, int y_coordinate_head, int x_coordinate_tail, int y_coordinate_tail, int width, int hieght, int velocity) : x_coordinate_head(x_coordinate_head), y_coordinate_head(y_coordinate_head), x_coordinate_tail(x_coordinate_tail), y_coordinate_tail(y_coordinate_tail), width(width), hieght(hieght), velocity(velocity){};
    void The_End()
    {
        gotoxy(55, 13);
        cout << "Thanks for playing!" << endl;
        gotoxy(1, 30);
    }
    void frame()
    {
        Monitor();
        int c;
        for (c = 1; c <= 109; c++)
        {
            gotoxy(c, 0);
            cout << "*";
        }

        for (c = 1; c <= 27; c++)
        {
            gotoxy(0, c);
            cout << "*";
        }
        for (c = 1; c <= 109; c++)
        {
            gotoxy(c, 27);
            cout << "*";
        }

        for (c = 1; c <= 27; c++)
        {
            gotoxy(110, c);
            cout << "*";
        }
        gotoxy(2, 3);
        cout << "Score: " << Score;
        gotoxy(100, 3);
        cout << "Life: " << rem_life;
    }
};
