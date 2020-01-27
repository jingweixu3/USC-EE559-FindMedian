#include "solution.h"
#include <iostream>

double Solution::FindMedian(std::vector<double> &input){
  if(input.size() == 0){
    return -1;
  }

  // if(!Is_Sorted(input)){
  //   return -1;
  // }

  else{
    if (input.size() % 2 == 1){
      return input.at(input.size()/2);
    }
    else{
      return (input.at(input.size()/2) + input.at(input.size()/2-1)) / 2;
    }
  }
}

bool Is_Sorted(std::vector <double> &input){
  for(int i = 1; i < input.size(); i++){
    if (input.at(i-1) > input.at(i)){
      std::cout<< "NOT a Sorted Array!\n";
      return false;
    }
  }
  return true;
}

