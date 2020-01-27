#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>


class Solution {
public:
  double FindMedian(std::vector <double> &input);
private:
  bool Is_Sorted(std::vector <double> &input);
};


#endif