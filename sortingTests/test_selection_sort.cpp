#include <gtest/gtest.h>
#include <vector>
#include "selection_sort.h"

TEST(SelectionSortTest, HandlesEmptyArray) {
    std::vector<int> arr;
    selectionSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(SelectionSortTest, SortsDoubles) {
    std::vector<double> arr = { 3.14, 1.41, 2.71, 0.58 };
    std::vector<double> expected = { 0.58, 1.41, 2.71, 3.14 };
    selectionSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SelectionSortTest, HandlesReverseSorted) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    selectionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}