#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "selection_sort.h"

TEST_CASE() {
	int n = 5;

	int array[5] = { 5, 7, 13, 8, 9 };
	SelectionSort(n, array);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array[i] <= array[i + 1]);
	}

	int array1[5] = {};
	SelectionSort(n, array1);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array1[i] <= array1[i + 1]);
	}

	float array2[5] = { 6.6, 13.9, -20, 30, 17 };
	SelectionSort(n, array2);
	for (int i = 0; i < n - 1; i++) {
		REQUIRE(array2[i] <= array2[i + 1]);
	}
}