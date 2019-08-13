#include<iostream>
#include"test.hpp"
using namespace std;

int Solution::MoreThanHalfNum(vector<int> numbers){
     int result = numbers[0];
     int len = numbers.size();
     int count = 1;

     for(int i = 1; i < len; ++i)
     {
         if(numbers[i] == result)
             count ++;
         else if(count == 0)
         {
             result = numbers[i];
             count = 1;
         }
         else
             count --;
     }
     return result;

}
