#include "insertion.h"

std::vector<int> insertion_sort(std::vector<int> arr)
{
    for (int i=1; i < arr.size(); i++)
    {
        for (int j=i; j> 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                std::swap(arr[j], arr[j - 1]);
            }
        }
    }
    return arr;
}