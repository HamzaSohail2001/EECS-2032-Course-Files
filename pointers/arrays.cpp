#include <iostream>
#include <vector>

int main()
{
    double temperature_list[4] = {1.0, 2.0, 3.0, 4.0};

    std::cout << temperature_list[1] << std::endl;

    std::vector<double> temperatures;
    temperatures.push_back(34.5);
    temperatures.push_back(32.1);
    temperatures.push_back(54.2);

    std::cout << temperatures.at(0) << std::endl;
    std::cout << temperatures.size() << std::endl;

    return 0;
}
