#include "solution.h"
#include <map>

std::vector<int> Solution::SumVector(const std::vector<int> &input, const int &sum)
{
  std::vector<int> result;
  std::map<int, unsigned int> inputmap;
  int temp_sum = 0;
  unsigned int i = 0;

  if (input.size() == 0)
    return result;

  for (i = 0; i < input.size(); i++)
  {
    inputmap.insert(std::pair<int, unsigned int>(input[i], i));
  }

  for (i = 0; i < input.size(); i++)
  {
    temp_sum = sum - input[i];
    if (inputmap.find(temp_sum) != inputmap.end() && inputmap.find(temp_sum)->second != i)
    {
      result.push_back(i);
      result.push_back(inputmap.find(temp_sum)->second);
      break;
    }
  }

  return result;
}