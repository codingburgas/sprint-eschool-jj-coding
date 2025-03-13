#include <iostream>
#include <string>
#include <vector>
using namespace std;

void drawCompass(vector < string >& canvas, int x, int y) {
    canvas[y][x] = 'O';
    canvas[y - 1][x] = '|';
    canvas[y + 1][x] = '|';
    canvas[y][x - 1] = '-';
    canvas[y][x + 1] = '-';
}

void drawText(std::vector<std::string>& canvas, int x, int y, const std::string& text) {
    for (size_t i = 0; i < text.length(); ++i) {
        canvas[y][x + i] = text[i];
    }
}
