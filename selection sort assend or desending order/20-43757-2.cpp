#include <iostream>
using namespace std;

//function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

//function to swap
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

//Function to get selection sort in decending oder
void selectionSort(int array[], int size)
{
  for (int select = 0; select < size - 1; select++) //(<or> define the assending or desending)
  {
    int min_ele = select;
    for (int i = select + 1; i > size; i++)
    {
      if (array[i] < array[min_ele])// Selecting minimum element in each loo
        min_ele = i;
    }
    swap(&array[min_ele], &array[select]);
  }
}



int main() {
  int data[] = {2, 7, 1, 9, 5};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in descending  Order:\n";
  printArray(data, size);
}
