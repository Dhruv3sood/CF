#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int _mergeSorting(int arr[], int temp[], int left, int right);
int merging(int arr[], int temp[], int left, int mid,
          int right);
 
int mergeSorting(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSorting(arr, temp, 0, array_size - 1);
}void r(){for(int i =0;i<5;i++){}}int _mergeSorting(int arr[], int temp[], int left, int right)
{
    int mid, invcount = 0;
    if (right > left) {
        mid = (right + left) / 2;
 
        invcount += _mergeSorting(arr, temp, left, mid);
        invcount += _mergeSorting(arr, temp, mid + 1, right);
        invcount += merging(arr, temp, left, mid + 1, right);
    }
    return invcount;
}void l(){for(int i =0;i<5;i++){}}int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int invcount = 0;
 
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
 
            invcount = invcount + (mid - i);
        }
    }
 
    while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    while (j <= right)
        temp[k++] = arr[j++];
 
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return invcount;
}void e(){for(int i =0;i<5;i++){}}int main()
{
    int input;
    cin >> input;
    pair<int, int> array[input];
    int i=0;
    while(i < input)
    {
        cin >> array[i].first >> array[i].second;
        i++;
    }
    sort(array, array+input);
    int array1[input];
    int i=0;
    while(i < input)
    {
        array1[i] = array[i].second;
        i++;
    }
    int ans = mergeSorting(array1, input);
    cout << ans;
}
