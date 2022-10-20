// 1.	What is the difference between in-place and out-place sorting algorithms?
// Ans in-place sorting - it means that the algorithm does not use any extra space for input manipulation.
// Examples of in-place sorting algorithms are Bubble Sort, Selection Sort and Insertion Sort, which don’t require extra space to perform sorting. That is why the space complexity for these algorithms is O(1).
//           Out -pace sorting – out of place means the sorting algorithm uses extra memory. It needs extra space to put the elements in as it’s sorting them.
// For example, merge sort as it requires O(n) extra space for merging.


// 3.	Suggest some practical examples of using in-place and out-place techniques.
// Ans   1. In place algorithms are used in bubble sort, selection sort etc., while out-place algorithms are used in merge sort.
// 2. In place algorithms have lesser space complexity but are difficult to apply in algorithms, whereas out-place techniques are easy to apply but increase the space complexity of the algorithm.
// 3.  if we want to reverse an array and dispose of the original then we use in place algo. One way to do this is to create a new array of equal size, fill it with the copies from a in the appropriate order then delete a. This method requires O(n) extra space for having the array a and b available simultaneously. Since we no longer need a, we can instead overwrite it with its own reversal using in place algorithm.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// function to print array
void print(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}
// simple insertion sorting - inplac
void insertion_sort(int arr[], int n)
{
   for (int i = 0; i < n; i++) // for passes
   {
      // for comparisons
      int j = i;
      while (j >= 0 && arr[j] > arr[j + 1])
      {
         // swap operation
         int temp = arr[j];
         arr[j] = arr[j + 1];
         arr[j + 1] = temp;
         j--;
      }
   }
   print(arr, n);
}
void insertion_sort_op(int arr[], int s, int l)
{
   // s - start
   // l - end
   if (s == l)
   {
      return;
   }

   int j = s + 1;
   int temp = arr[j];
   while (s >= 0)
   {
      if (arr[s] > temp)
      {
         arr[s + 1] = arr[s];
         s--;
      }
      if (s == -1)
      {
         arr[0] = temp;
         break;
      }
      if (arr[s] <= temp)
      {
         arr[s + 1] = temp;
         break;
      }
      insertion_sort_op(arr, s + 1, l);
   }
}
int main()
{
   cout << "Input the size of the array"
        << " ";
   int n;
   cin >> n;
   int arr[n];
   cout << "Input the elements of the array"
        << " ";
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   cout << "Array before sorting"
        << " ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
   cout << "Array after sorting - inplace"
        << " ";
   insertion_sort(arr, n);
   cout << endl;
   cout << "Array after sorting - outplace"
        << " ";
   insertion_sort_op(arr, 0, n - 1);
   print(arr, n);

   return 0;
}
