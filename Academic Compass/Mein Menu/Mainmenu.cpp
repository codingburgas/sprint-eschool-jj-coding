#include <iostream>
#include <string>
#include <vector>
#include "Mainmenu.h"
using namespace std;

void drawCompass(vector < string >& canvas, int x, int y);

void drawText(std::vector<std::string>& canvas, int x, int y, const std::string& text);


int main() {
    // Размери на canva
    int width = 40;
    int height = 20;

    // създаване на canvas (2D vector of characters)
    std::vector<std::string> canvas(height, std::string(width, ' '));

    // Поставяне на компаса в средата
    drawCompass(canvas, width / 2, height / 2 - 2); 

    // Поставяне на текст "Academic Compass"
    std::string text = "Academic Compass";
    int textX = (width - text.length()) / 2; // Центриране на текста
    int textY = height / 2 + 3; 
    drawText(canvas, textX, textY, text);

     
    for (const auto& row : canvas) {
        std::cout << row << std::endl;
    }

    return 0;
}
