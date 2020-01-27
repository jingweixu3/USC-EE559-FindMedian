#include <iostream>
#include "src/lib/solution.h"

Solution solution;

int main()
{
    std:: vector<double> vector1 = {};
    std::vector<double> vector2 = {10,12,14,16,18,20};
    std::vector<double> vector3 = {1,3,5,7,9};

    std::cout << "vector1: {}, median: " << solution.FindMedian(vector1)<< std::endl;
    std::cout << "ector2 = {11,12,14,16,19,20}, median: " << solution.FindMedian(vector2)<< std::endl;
    std::cout << "vector3 = {1,3,5,7,9}, median: " << solution.FindMedian(vector3)<< std::endl;
    


    return EXIT_SUCCESS;
}