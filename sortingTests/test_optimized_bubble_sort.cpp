#include <gtest/gtest.h>
#include <vector>
#include "optimized_bubble_sort.h"

TEST(OptimizedBubbleSortTest, HandlesEmptyArray) {
    std::vector<int> arr;
    optimizedBubbleSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(OptimizedBubbleSortTest, SortsUnsortedArray) {
    std::vector<int> arr = { 6, 14, 9, 1, 15, 8, 5, 19 };
    std::vector<int> expected = { 1, 5, 6, 8, 9, 14, 15, 19 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(OptimizedBubbleSortTest, HandlesReverseSorted) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    optimizedBubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}