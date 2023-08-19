#include <iostream>
#include <vector>

#include "Functor.h"

using namespace std;

int main()
{
    vector<int> numbers = { 5, 2, 10, 8, 3, 8, 1, 7 };

    Functor operations(3);

    cout << "Min: " << operations.findMin(numbers) << endl;
    cout << "Max: " << operations.findMax(numbers) << endl;

    operations.sortDecreasing(numbers);
    cout << "Sorted (Decreasing): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    operations.sortIncreasing(numbers);
    cout << "Sorted (Increasing): ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    operations.increaseValues(numbers);
    cout << "Increased Values: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    operations.decreaseValues(numbers);
    cout << "Decreased Values: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    int targetValue = 8;
    operations.removeValue(numbers, targetValue);
    cout << "Values after removing " << targetValue << ": ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
