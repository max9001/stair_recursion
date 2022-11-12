
using namespace std;
#include <iostream>

int countStepCombinations(int numOfStairs);
int countStepCombinationsHelper(int numOfStairs, int comboCount);
int countStepCombinationsHelper(int numOfStairs, int comboCount, int index, int* memoization);
