#include <gtest/gtest.h>
#include <vector>
#include "bubble_sort.h"

TEST(BubbleSortTest, HandlesEmptyArray) {
    std::vector<int> arr;
    bubbleSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(BubbleSortTest, SortsUnsortedArray) {
    std::vector<int> arr = { 6, 14, 9, 1, 15, 8, 5, 19 };
    std::vector<int> expected = { 1, 5, 6, 8, 9, 14, 15, 19 };
    bubbleSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, HandlesAlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    bubbleSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}