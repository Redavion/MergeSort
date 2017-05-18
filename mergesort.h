// Implement the mergesort algorithm to sort the array of longs pointed
// to by arr. Size tells how many elements are in the array.




/*
 * merge_sort creates newPtr which points to an empty array of longs. It copies contents of
arr into the newly created array and performs mergesort and sorts the data from newPtr's
array back to arr's array
 */
void merge_sort(long *arr, int size);

/*
 * This method takes a parameter of type int and initializes an empty array
 of longs to that size. All indices are set to 0. Returns long pointer to array.
 */
long* initializeNewArray(int size);

/*This method copies the contents of one array pointed to by a long*
to another array pointed to by a long*
 */
void copyArray(long *arr, long *newPtr, int start, int finish);

/*This method does the work of a recursive merge sort. It recursively sorts the right side
of the array and then the left side of the array. Finally it merges the two sorted sides into
one cohesive array.
 Base case: If the array size is less then 2, return because it is already sorted */
void sort(long *newPtr, long *arr, int start, int finish);


/*This method merges the two sorted halves of an array of longs (pointed to by arr)
into one cohesive, sorted array pointed to by newPtr
 */
void merge(long *arr, long *newPtr, int start,  int finish);