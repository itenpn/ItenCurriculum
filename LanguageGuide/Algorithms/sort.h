/* Sorting Algorithms
 * By Nicholas Iten
 */

//None of these functions return data because arrays are passed by reference
void insert_sort(int array[], int number_of_elements);
void bubble_sort(int array[], int number_of_elements);
void merge_sort(int array[], int start, int end);
void merge_array(int array[], int start1, int end1, int start2, int end2);

void insert_sort(int array[], int number_of_elements){
  /* The insertion sort checks each value against a single value
   * and replaces any that fail the initial test.
   */
  for (int i = 0; i < number_of_elements; i++) //Element we are checking against
    for (int j = i; j < number_of_elements; j++) //Element we are comparing against i
      if (array[i] > array[j]){ //swap if the original is bigger
        int temp = array[i];
        array[i] = array[j];
        array[j] = array[i];
      }
}

void bubble_sort(int array[], int number_of_elements){
  /* The bubble sort checks the values right next to each other
   * This is a very brute force way of making a sort.
   * This runs through the entire dataset to check if complete
   */
  int flag = 0;
  while (flag == 0){
    flag = 1;
    for (int i = 0; i < number_of_elements; i++)
      if (array[i] > array[i + 1]){
        int temp = array[i];
        array[i] = array [i + 1];
        array[i + 1] = temp;
        flag = 0;
      }
  }
}

void merge_sort(int array[], int start, int end){
  /* The merge sort is a lot more complicated
   * Instead of sorting against individual values,
   * the sort organizes the elements into their own lists
   * and organizes those, then the sorted lists are compared against
   * the larger lists until the complete list is created
   * this requires recursive logic to work.
   */
  int mid = (start + end) / 2; //finds the middle point of the mini array
  if (start < end){ //checks if these are valid to break up
    merge_sort(array, start, mid); //front half of the array
    merge_sort(array, mid + 1, end); //back half of the array
    merge_array(array, start, mid, mid + 1, end); //puts them all back together.
  }
}

void merge_array(int array[], int start1, int end1, int start2, int end2){
  int temp[100]; //place to store the array while we are sorting.
  int i, j, k; //counters
  i = start1; //counter for the position of the front half
  j = start2; //counter for the position of the back half
  k = 0; //counter for the position of the temporary array

  while (i <= end1 && j <= end2){ //Goes through the list and sorts them
    if (array[i] < array[j])
      temp[k++] = array[i++];
    else
      temp[k++] = array[j++];
  }

  while (i <= end1) //finishes the list if j fails before
    temp[k++] = array[i++];

  while (j <= end2) //finishes the list if i fails before
    temp[k++] = array[j++];

  for (i = start1, j = 0; i <= end2; i++, j++) //copies temp to the array
    array[i] = temp[j];
}
