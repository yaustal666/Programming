// Quick-sort using Hoar's partition
// algorithm
// 
// yaustal666
#include<iostream>


int partition(int* arr, int l, int r){
    int pivot, i = l, j = r;
    pivot = arr[(i + j)/2];



    while(1){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i >= j) return j;

        std::swap(arr[i++], arr[j--]);
    }
}

void quick_sort(int* arr, int left, int right){
    if(left < right){
        int p = partition(arr, left, right);
        quick_sort(arr, left, p);
        quick_sort(arr, p + 1, right);
    }
}