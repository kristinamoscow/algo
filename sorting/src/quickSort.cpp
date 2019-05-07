#include <iostream>

using namespace std;

#include "quickSort.h"

void quickSort(int a[], int low, int high){
    while(low < high){
        int lim = partition(a, low, high);
        int left_len = lim - low;
        int right_len = high - (lim + 1);
        if(left_len > right_len){
            quickSort(a, lim + 1, high);
            high = lim;
        }
        else{
            quickSort(a, low, lim);
            low = lim + 1;
        }
    }
    
}

int partition(int a[], int low, int high){
    int p = a[low];
    int i = low, j = high;
    while(i <= j){
        while(a[i] < p) i++;
        while(a[j] > p) j--;
        if(i >= j) break;
        swap(a[i++], a[j--]);
    }
    return j;
}