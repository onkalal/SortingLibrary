#include <gtest/gtest.h>
#include <vector>
#include "insertion_sort.h"

TEST(InsertionSortTest, HandlesEmptyArray) {
    std::vector<int> arr = {};
    insertionSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(InsertionSortTest, HandlesSingleElement) {
    std::vector<int> arr = { 42 };
    insertionSort(arr);
    EXPECT_EQ(arr[0], 42);
}

TEST(InsertionSortTest, SortsUnsortedArray) {
    std::vector<int> arr = { 6, 14, 9, 1, 15, 8, 5, 19 };
    std::vector<int> expected = { 1, 5, 6, 8, 9, 14, 15, 19 };
    insertionSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, HandlesAlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    insertionSort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}