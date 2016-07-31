//
//  main.c
//  findmininshiftarray
//
//  Created by cliff on 2016-07-30.
//  Copyright © 2016 cliff. All rights reserved.

//  Отсортированный массив был циклически сдвинут так,
//  что элементы оказались в следующем порядке: 3 4 5 6 7 1 2. Как найти минимальный элемент?
//  Вы можете исходить только из предположения, что элементы в массиве не повторяются.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[7] = {3, 4, 5, 6, 7 , 1, 2};
    int right = (int)(( sizeof(array) / sizeof(array[0]))-1);
    int left = 0;
    while (right-left != 1){
        if (array[(right - left)/2] > array[right]){
            left = left + (right-left)/2;
        } else {
            right = left + (right-left)/2;
        }
    }
    if (array[left] < array[right]){
        printf("Min element: [%i] %i\n", left, array[left]);
    } else {
        printf("Min element: [%i] %i\n", right, array[right]);
    }
    return 0;
}
