#include <iostream>
#include <cmath>
#include <functional>

std::function<void(double)> functions[2] = {
    [](double value) {std::cout << " sin: " << sin(value); },
    [](double value) {std::cout << " cos: " << cos(value); }
};

double angles[3] = {
    30 * 3.1415926 / 180, 60 * 3.1415926 / 180, 90 * 3.1415926 / 180
};

int main()
{ 
     for (const auto& angle : angles) {
        std::cout << angle << ": ";
        for (const auto& function : functions)
            function(angle);
        std::cout << std::endl;
    }
}