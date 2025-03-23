#include "../include/draw.h"
#include <iostream>
using namespace std;
void drawCompass(vector<string>& canvas, int x, int y) {
    canvas[y][x] = '+';
}
void drawText(vector<string>& canvas, int x, int y, const string& text) {
    if (y >= 0 && y < canvas.size()) {
        for (size_t i = 0; i < text.size() && (x + i) < canvas[y].size(); i++) {
            canvas[y][x + i] = text[i];
        }
    }
}