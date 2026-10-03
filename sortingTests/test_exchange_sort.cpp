#include <gtest/gtest.h>
#include <vector>
#include "exchange_sort.h"

TEST(ExchangeSortTest, HandlesEmptyArray) {
    std::vector<int> arr;
    exchangeSort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(ExchangeSortTest, SortsUnsortedArray) {
    std::vector<int> arr = { 6, 14, 9, 1, 15, 8, 5, 19 };
    std::vector<int> expected = { 1, 5, 6, 8, 9, 14, 15, 19 };
    exchangeSort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(ExchangeSortTest, HandlesSingleElement) {
    std::vector<int> arr = { 10 };
    exchangeSort(arr);
    EXPECT_EQ(arr[0], 10);
}