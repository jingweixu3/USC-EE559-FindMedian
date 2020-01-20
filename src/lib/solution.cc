#include "solution.h"
#include <iostream>

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

double Solution::FindMedian(std::vector<double> &input){
  if(input.size() == 0){
    return -1;
  }
  else if (input.size() % 2 == 1){
    return input.at(input.size()/2);
  }
  else{
    //std::cout << input.at(input.size()/2) + input.at(input.size()/2-1)<<"\n";
    return (input.at(input.size()/2) + input.at(input.size()/2-1)) / 2;
  }
}

