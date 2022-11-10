#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    int count = 0;
    int count1 = 0;
    for (int j = 0; j < n; j++) // passes
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            count++;
            if (arr[i] > arr[i + 1]) // comparisons
            {
                count1++;
                int temp = arr[i]; // swap adjecent elements
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            
        }
    }
   cout<< "Number of comparisons " <<count<<endl; //number of comparisons
   cout<< "Number of Swaps " <<count1<<endl; //number of swaps
}
int main()
{
    // take array as input
    int n; // n is the size of the array
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array : ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubble_sort( arr,n);
    printf("Sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        cout<<" ";
    }
    cout << endl;
    return 0;
}
