#include "Functor.h"


Functor::Functor(int value)
    :
    value(value)
{}

int Functor::findMin(const vector<int>& nums)
{
    return *min_element(nums.begin(), nums.end());
}

int Functor::findMax(const vector<int>& nums)
{
    return *max_element(nums.begin(), nums.end());
}

void Functor::sortDecreasing(vector<int>& nums)
{
    sort(nums.begin(), nums.end(), greater<int>());
}

void Functor::sortIncreasing(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
}

void Functor::increaseValues(vector<int>& nums)
{
    for (int& num : nums)
    {
        num += value;
    }
}

void Functor::decreaseValues(std::vector<int>& nums)
{
    for (int& num : nums)
    {
        num -= value;
    }
}

void Functor::removeValue(vector<int>& nums, int targetValue)
{
    nums.erase(remove(nums.begin(), nums.end(), targetValue), nums.end());
}
