#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Functor
{
    int value;
public:
    Functor(int value);

    int findMin(const vector<int>& nums);
    int findMax(const vector<int>& nums);

    void sortDecreasing(vector<int>& nums);
    void sortIncreasing(vector<int>& nums);

    void increaseValues(vector<int>& nums);
    void decreaseValues(vector<int>& nums);

    void removeValue(vector<int>& nums, int targetValue);
};