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

int countStepCombinations(int numOfStairs){
    int* memoization = new int[numOfStairs + 1];
    for (int i = 0; i <= numOfStairs; i++){
        memoization[i] = -1;
    }
    memoization[0] = 1;
    
    return countStepCombinationsHelper(numOfStairs, 0, 1, memoization);
}




int countStepCombinationsHelper(int numOfStairs, int comboCount, int index, int* memoization){
    
    cout << "hey" << endl;
    
    if(memoization[index] != -1){
        cout << "yo" << endl;
        return memoization[index];
    }


    if(index > numOfStairs){
        cout << "hello" << endl;
        return 0;
    }


    else if(index == numOfStairs){
        cout << "sup" << endl;
        return 1;
    }


    memoization[index]= countStepCombinationsHelper(numOfStairs, comboCount, index + 1, memoization) + 
                        countStepCombinationsHelper(numOfStairs, comboCount, index + 2, memoization) + 
                        countStepCombinationsHelper(numOfStairs, comboCount, index + 3, memoization);
    
    memoization[index] = comboCount;
    return comboCount;
}





#pragma region hi
int countStepCombinationsHelper(int numOfStairs, int comboCount){
    
    if (numOfStairs == 0){
        return 1;
    }
    
    else if (numOfStairs < 0){
        return 0;
    }

    comboCount +=   countStepCombinationsHelper(numOfStairs -1, comboCount) + 
                    countStepCombinationsHelper(numOfStairs -2, comboCount) + 
                    countStepCombinationsHelper(numOfStairs -3, comboCount);


    return comboCount;
}
#pragma endregion 