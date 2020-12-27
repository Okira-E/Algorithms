#include <iostream>
#include <cmath>

int main()
{

    double x1 = 3, y1 = 3;
    double x2 = -5, y2 = -3;

    double dx = x2 - x1;
    double dy = y2 - y1;

    int numberOfSteps;

    if (std::abs(dx) > std::abs(dy))
    {
        numberOfSteps = (int)std::abs(dx);
    }
    else
    {
        numberOfSteps = (int)std::abs(dy);
    }

    double incrementX = dx / (double)numberOfSteps;
    double incrementY = dy / (double)numberOfSteps;

    for (int i = 0; i <= numberOfSteps; ++i)
    {
        std::cout << "(" << round(x1) << ", " << round(y1) << ")" << std::endl;

        x1 = x1 + incrementX;
        y1 = y1 + incrementY;
    }

    return 0;
}
