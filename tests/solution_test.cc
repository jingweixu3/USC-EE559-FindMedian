#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ExpectMedian, ReturnMedian_EmptyVector) {
  Solution solution;
  std:: vector<double> vector = {};
  double actual = solution.FindMedian(vector);
  double expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(ExpectMedian, ReturnMedian_EvenSize) {
  Solution solution;
  std::vector<double> vector = {10,12,14,16,18,20};
  double actual = solution.FindMedian(vector);
  double expected = 15;
  EXPECT_EQ(expected, actual);
}

TEST(ExpectMedian, ReturnMedian_OddSize) {
  Solution solution;
  std::vector<double> vector = {1,3,5,7,9};
  double actual = solution.FindMedian(vector);
  double expected = 5;
  EXPECT_EQ(expected, actual);
}