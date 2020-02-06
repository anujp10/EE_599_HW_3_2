#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SumVectorShould, SumVectorReturn) {
  Solution solution;
  std::vector <int> input = {3, 7, 11, 13};
  std::vector <int> actual = solution.SumVector(input, 10);
  std::vector <int> expected = {0, 1};
  EXPECT_EQ(expected, actual);
}

TEST(SumVectorShould_1, SumVectorReturn_1) {
  Solution solution;
  std::vector <int> input = {3, 7, 11, 13};
  std::vector <int> actual = solution.SumVector(input, 1200);
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(SumVectorShould_2, SumVectorReturn_2) {
  Solution solution;
  std::vector <int> input = {1, -8, -11, 13, 4};
  std::vector <int> actual = solution.SumVector(input, 5);
  std::vector <int> expected = {0, 4};
  EXPECT_EQ(expected, actual);
}

TEST(SumVectorShould_3, SumVectorReturn_3) {
  Solution solution;
  std::vector <int> input;
  std::vector <int> actual = solution.SumVector(input, 5);
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(SumVectorShould_4, SumVectorReturn_4) {
  Solution solution;
  std::vector <int> input = {1, -8, -11, 13, 4, -22};
  std::vector <int> actual = solution.SumVector(input, -30);
  std::vector <int> expected = {1, 5};
  EXPECT_EQ(expected, actual);
}