#include "bubble.h"


vector<int> bubble_sort(vector<int> arr)
{
    int total_swaps = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            total_swaps++;
        }
    }
    if (total_swaps > 0)
    {
        return bubble_sort(arr);
    }
    else
    {
        return arr;
    }
}
