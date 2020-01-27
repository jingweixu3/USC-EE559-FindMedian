#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
Solution solution;

TEST(ExpectMedian, ReturnMedian_EmptyVector) {
  std:: vector<double> vector = {};
  double actual = solution.FindMedian(vector);
  double expected = -1;
  EXPECT_EQ(expected, actual);
}

// TEST(ExpectMedian, ReturnMedian_NotSortedVector) {
//   Solution solution;
//   std:: vector<double> vector = {1,2,3,4,2,3,1,3,1};
//   double actual = solution.FindMedian(vector);
//   double expected = -1;
//   EXPECT_EQ(expected, actual);
// }

TEST(ExpectMedian, ReturnMedian_EvenSize) {
  std::vector<double> vector1 = {11,12,13,14,15,16};
  double actual = solution.FindMedian(vector1);
  double expected = 13.5;
  EXPECT_EQ(expected, actual);

  std::vector<double> vector2 = {11,13,15,17,19,21};
  double actual1 = solution.FindMedian(vector2);
  double expected1 = 16;
  EXPECT_EQ(expected1, actual1);

  std::vector<double> vector3 = {10,10,10,10,10,10};
  double actual2 = solution.FindMedian(vector3);
  double expected2 = 10;
  EXPECT_EQ(expected2, actual2);

}

TEST(ExpectMedian, ReturnMedian_OddSize) {
  std::vector<double> vector1 = {11,12,13,14,15};
  double actual = solution.FindMedian(vector1);
  double expected = 13;
  EXPECT_EQ(expected, actual);


  std::vector<double> vector2 = {2,4,6,8,10};
  double actual1 = solution.FindMedian(vector2);
  double expected1 = 6;
  EXPECT_EQ(expected1, actual1);

  std::vector<double> vector3 = {5,5,5,5,5,5,5};
  double actual2 = solution.FindMedian(vector3);
  double expected2 = 5;
  EXPECT_EQ(expected2, actual2);
}