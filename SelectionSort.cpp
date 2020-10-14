//
// Created by Flavio Moreira on 11/10/2020.
//

#include "SelectionSort.h"
#include <iostream>

int * selectionSort(int *array, const int& arraySize) {

    int unsortedOffset = 0;

    for (int i = 0; i < arraySize; ++i) {
        //print log

        //Find the smallest number and swap it with the current array[i]
        for (int j = unsortedOffset; j < arraySize; ++j) {
            if (array[i] > array[j] && i < (arraySize)) {

                //swap the current array[i] with element at array[j]
                std::swap(array[i],array[j]);
            }
        }
        //Move the unsorted offset one step ahead
        unsortedOffset++;
    }
    return array;
}


template<typename T>
void printArray(const T *array, const int& arraySize ) {
    printf("\n");
    for (int i = 0; i < arraySize; ++i) {
        std::cout << array[i];
    }
    printf("\n");
}