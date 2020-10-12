//
// Created by Flavio Moreira on 11/10/2020.
//
#ifndef SORTINGALGORITHMS_SELECTIONSORT_H

#define SORTINGALGORITHMS_SELECTIONSORT_H

/**
 * Sort the array
 * @param array to be sorted
 * @param size of the array
 * @return the sorted array
 */

extern int *selectionSort(int *, const int&);


/**
 * @brief Print an array of a given type
 * @param array to be printed
 * @param size of the array
 */

template<typename T>
extern void printArray(const T *, const int&);

#endif //SORTINGALGORITHMS_SELECTIONSORT_H