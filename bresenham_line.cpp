#include <iostream>



int main() {

    const int x1 = 0, y1 = 0;
    const int x2 = 15, y2 = 10;

    int x = x1;
    int y = y1;

    const int dx = x2 - x1;
    const int dy = y2 - y1;

    int p = 2 * dy - dx;

    while (x <= x2) {
        std::cout << "(" << x << ", " << y << ")" << " P: " << p << std::endl;
        ++x;
        if (p < 0) {
            // Draw current x,y
            p = p + 2 * dy;
        } else {
            ++y;
            // Draw current x,y
            p = p + 2 * dy - 2 * dx;
        }
    }


    return 0;
}
