#include <iostream>
#include <cmath>

void getInput(double &x1, double &y1, double &r1, double &x2, double &y2, double &r2)
{
    std::cin >> x1;
    std::cin >> y1;
    std::cin >> r1;
    std::cin >> x2;
    std::cin >> y2;
    std::cin >> r2;
}

// Distance formula: d(P, Q) = root((x2-x1)^2 + (y2-y1)^2)
double measureDistance(double x1, double y1, double x2, double y2)
{
    double distance = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
    return distance;
}

// Area of a circle
double circleArea(double r)
{
    return M_PI * pow(r, 2);
}

double computeArea(double r1, double r2, double hypotenuse)
{
    double s = 0.5 * (r1 + r2 + hypotenuse);
    double area = std::sqrt((s * (s - r1) * (s - r2) * (s - hypotenuse)));

    return area;
}

int main0()
{

    double x1, y1, r1, x2, y2, r2;

    getInput(x1, y1, r1, x2, y2, r2);

    const double distanceBetweenCenters = measureDistance(x1, y1, x2, y2);

    double finalArea = computeArea(r1, r2, distanceBetweenCenters) * 2;

    std::cout << finalArea << std::endl;

    return 0;
}