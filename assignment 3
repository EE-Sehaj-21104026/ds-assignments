#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// also can use sizeof function to get the size of the array or the count integer to count the number of inputs

// simple binary search function
int binary_search(vector<int> &v, int key, int s, int l)
{

    int mid = (s + l) / 2;
    while (s <= l)
    {
        if (v[mid] == key)
        {
            return 1;
        }
        else if (mid < key)
        {
            s = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
        mid = (s + l) / 2;
    }
    return -1;
}
int binary_search_unknown(vector<int> &v, int key)
{
    int s = 0, l = 1;
    while (v[l] < key)
    {
        s = l;
        l = l * 2;
    }
    return binary_search(v, key, s, l);
}
int main()
{
    // taking input as a vector
    vector<int> v;
    int a;
    cout << "Enter the elements of the array : " << endl;
    cout << "at the end of input enter -1 " << endl;
    while (cin >> a)
    {
        if (a == -1)
        {
            break;
        }
        v.push_back(a);
    }

    int m;
    cout << "Enter the element to be found in the array : " << endl;
    cin >> m;
    int y = binary_search_unknown(v, m);
    cout << y << endl;
    return 0;
}
