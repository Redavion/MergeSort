//
// Created by Alison Chen on 1/16/17.
//

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

//merge_sort creates newPtr which points to an empty array of longs. It copies contents of
//arr into the newly created array and performs mergesort and sorts the data from newPtr's
//array back to arr's array
void merge_sort(long *arr, int size)
{
    long* newPtr = initializeNewArray(size);

    copyArray(arr, newPtr, 0, size); //copy contents of arr into new array

    sort(newPtr, arr, 0, size); //perform mergesort

    free(newPtr);   //free new pointer
}

//This method takes a parameter of type int and initializes an empty array
// of longs to that size. All indices are set to 0. Returns long pointer to array.
long* initializeNewArray(int size){
    long* newPtr= (long *) malloc(sizeof(long) * size);
    for(int k = 0; k < size; k++) {
        newPtr[k] = 0;
    }
    return newPtr;
}

//This method copies the contents of one array pointed to by a long*
//to another array pointed to by a long*
void copyArray(long *arr, long *newPtr, int start, int finish) {
    for(int k = start; k < finish; k++) {
        newPtr[k] = *(arr + k);
    }
}

//This method does the work of a recursive merge sort. It recursively sorts the right side
//of the array and then the left side of the array. Finally it merges the two sorted sides into
//one cohesive array.
// Base case: If the array size is less then 2, return because it is already sorted
void sort(long *newPtr, long *arr, int start, int finish){
    if (finish - start >=2) { //if size at least 2
        int mid = (finish + start)/2;
        sort(arr, newPtr, start, mid); //sort right side
        sort(arr, newPtr, mid, finish); //sort left side
        merge(newPtr, arr, start, finish);

    } else { //size < 2 so list is already sorted
        return;
    }

}

//This method merges the two sorted halves of an array of longs (pointed to by arr)
//into one cohesive, sorted array pointed to by newPtr
void merge(long *arr, long *newPtr, int start, int finish) {
    int mid = (finish + start)/2;
    int firstHalf = start; //keeps track of the index in the first half of arr 
    int secondHalf = mid; //keeps track of the index in the second half of arr 

    for (int i = start; i < finish; i++) {
        if (firstHalf<mid && secondHalf<finish) {
            if (arr[firstHalf] <= arr[secondHalf]) {
                newPtr[i] = arr[firstHalf];
                firstHalf++;
            } else {
                newPtr[i] = arr[secondHalf];
                secondHalf++;
            }
        } else {
            //enter this else statement if the array size is an odd number and one of the 
            // halves is empty. Attach the remaining contents of the non-empty half to the end 
            // of the new array. 
            if (firstHalf<mid){

                newPtr[i]=arr[firstHalf];
                firstHalf++;
            } else{
                newPtr[i]=arr[secondHalf];
                secondHalf++;
            }

        }
    }
}
