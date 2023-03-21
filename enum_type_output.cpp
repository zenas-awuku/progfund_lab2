#include <iostream>

using namespace std;

int main()
{
    enum Color
    {
        RED,
        YELLOW,
        AMBER = YELLOW,
        GREEN
    };

    Color color1 = RED;
    Color color2 = YELLOW;
    Color color3 = AMBER;
    Color color4 = GREEN;


    cout << color1 << color2 << color3 << color4 << endl;
}