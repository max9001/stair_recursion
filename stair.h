
using namespace std;
#include <iostream>

unsigned long long countStepCombinations(int numOfStairs);
unsigned long long countStepCombinationsHelper(int numOfStairs, unsigned long long comboCount);
unsigned long long countStepCombinationsHelper(int numOfStairs, unsigned long long comboCount, int index, int* memoization);
