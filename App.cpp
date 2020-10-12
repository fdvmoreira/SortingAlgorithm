//
// Created by Flavio Moreira on 11/10/2020.
//

#include <iostream>
#include "SelectionSort.h"

int main(){

    int array[] = {3,2,1,9,5,4,8,7,6};

    int * res = (int *)malloc(sizeof(int )*9);
    res = selectionSort(array,9);



    return 0;
}