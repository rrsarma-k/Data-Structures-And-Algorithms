#include <iostream>
#include <climits>
using namespace std;

void sort(int* ar, int n) {
    int index = 0;
    for(int i = 1; i < n; ++i) {
        int j = i - 1;
        int key = ar[i];
        while(j > 0 && ar[key] < ar[j]) {
            swap(ar[j + 1] , ar[j]);
            --j;
        }
        ar[j + 1] = key;
    }
}

int main() {
    int n = 6;
    int ar[] = {2, 7, 4, 1, 3};
    sort(ar, n);
    for(int i = 0; i < n; ++i) cout << ar[i] << ' ';
    cout << '\n';
}


/* 
** Insertion sort complexity:
** Best case : O(n^2)
** Avg case : O(n^2)
** Worst case : O(n^2)
*/


// 5 4 3 2 1