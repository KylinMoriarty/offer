#include <iostream>
#include "test.hpp"
#include "Sequence.hpp"
using namespace std;

int Solution::MoreThanHalfNum(vector<int> numbers){

//     Sequence seq;
//     seq.InsertSort(numbers);
//     return numbers[numbers.size()/2];

       int a=numbers[numbers.size()/2];
       int time=0;
        for(int i=0;i<numbers.size();i++)
        {
            if(numbers[i]==a)
                time++;
        }

        if(time*2>numbers.size())
        return numbers[numbers.size()/2];
        else
            return 0;


}
