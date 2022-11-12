/*
cs(4)
  |__
     |
   cs(3) + cs(2) + cs(1)
     |__
        |
      cs(2) + cs(1) + cs(0)
         |__
            |
          cs(1) + cs(0) + cs(-1)
            |__
               | 
             cs(0) + cs(-1) + cs (-2)

    Arr [ cs(0) , cs(1) , ... ]

*/


#include "stair.h"

unsigned long long countStepCombinations(int numOfStairs){
    int* memoization = new int[numOfStairs + 1];
    // for (int i = 0; i <= numOfStairs; i++){
    //     memoization[i] = -1;
    // }
    // memoization[0] = 1;
    // //return countStepCombinationsHelper(numOfStairs, comboCount);

    return countStepCombinationsHelper(numOfStairs, 0, 0, memoization);
}

unsigned long long countStepCombinationsHelper(int numOfStairs, unsigned long long comboCount, int index, int* memoization){

    // if (memoization[index] != -1){
    //     return memoization[index];
    // }

    if (numOfStairs == 0){
        return 1;
    }
    else if (numOfStairs < 0){
        return 0;
    }
    else if ()

    // comboCount +=   countStepCombinationsHelper(numOfStairs -1, comboCount, index +1 , memoization) + 
    //                 countStepCombinationsHelper(numOfStairs -2, comboCount, index +1 , memoization) + 
    //                 countStepCombinationsHelper(numOfStairs -3, comboCount, index +1 , memoization);

    return comboCount;

}







// unsigned long long countStepCombinationsHelper(int numOfStairs, int comboCount){


//     if (numOfStairs == 0){
//         return 1;
//     }


//     comboCount +=   countStepCombinationsHelper(numOfStairs -1, comboCount) + 
//                     countStepCombinationsHelper(numOfStairs -2, comboCount) + 
//                     countStepCombinationsHelper(numOfStairs -3, comboCount);


//     return comboCount;
// }