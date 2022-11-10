
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[], int n)
{
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++) // passes
    {
        for (int j = i + 1; j < n; j++) // comparisons
        {
            count++;
            if (arr[i] > arr[j]) // swaps
            {
                count1++;
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Number of comparisons " << count << endl; // number of comparisons
    cout << "Number of Swaps " << count1 << endl;      // number of swaps
}
int main()
{
    int n; // n is the size of the array
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    selectionsort(arr, n);
    printf("Sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        cout << " ";
    }
    return 0;
}
