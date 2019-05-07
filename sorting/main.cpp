#include <iostream>
#include <time.h>

using namespace std;

#include "quickSort.h"

int main(){
    srand(time(0));
    int n;
    cin >> n;
    int *a = new int[n];

    for(int i = 0; i < n; i++){
        a[i] = rand()%900 + 100;
        cout << a[i] << "  ";
    }
    cout << "\nSorted numbers :\n";
    quickSort(a, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << a[i] << "  ";
    } 
    return 0;
}


