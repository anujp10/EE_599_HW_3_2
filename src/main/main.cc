#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> input = {3, 7, 11, 13};
    std::vector<int> input2 = {1, 5, 2, 3};
    std::vector<int> input3 = {-1, -5, 2, 3, -5, -8};
    std::vector<int> input4;
    std::vector<int> output;
    output = solution.SumVector(input, 10);
    if (output.size() != 0)
        std::cout << "[" << output[0] << ", " << output[1] << "]" << std::endl;
    else
        std::cout << "[]" << std::endl;

    output = solution.SumVector(input2, 5);
    if (output.size() != 0)
        std::cout << "[" << output[0] << ", " << output[1] << "]" << std::endl;
    else
        std::cout << "[]" << std::endl;

    output = solution.SumVector(input2, 1200);
    if (output.size() != 0)
        std::cout << "[" << output[0] << ", " << output[1] << "]" << std::endl;
    else
        std::cout << "[]" << std::endl;

    output = solution.SumVector(input3, -10);
    if (output.size() != 0)
        std::cout << "[" << output[0] << ", " << output[1] << "]" << std::endl;
    else
        std::cout << "[]" << std::endl;

    output = solution.SumVector(input4, -1);
    if (output.size() != 0)
        std::cout << "[" << output[0] << ", " << output[1] << "]" << std::endl;
    else
        std::cout << "[]" << std::endl;
    return EXIT_SUCCESS;
}