#include <iostream>
#include <climits>
using namespace std;

// Not an inplace sort algo, as it creates an auxilary space(br) w.r.to n.
void sort1(int* ar, int n) {
    int br[n] = {0};
    int index = 0;
    for(int i = 0; i < n; ++i) {
        int mn_ele_idx = i;
        for(int j = 0; j < n; ++j) {
            if(ar[j] < ar[mn_ele_idx]) {
                mn_ele_idx = j;
            }
        }
        // Copying each pass min element to array br[]
        br[index++] = ar[mn_ele_idx];
        ar[mn_ele_idx] = INT_MAX;
    }
    for(int i = 0; i < n; ++i) ar[i] = br[i];
}

// Inplace sort algo.
/* Any sorting algorithm outer-loop needs to run only n-1 times,
   as nth element will already be sorted then. */
void sort(int* ar, int n) {
    for(int i = 0; i < n - 1; ++i) {
        int mn_ele_idx = i;
        for(int j = i; j < n; ++j) {
            if(ar[j] < ar[mn_ele_idx]) {
                mn_ele_idx = j;
            }
        }
        swap(ar[i], ar[mn_ele_idx]);
    }
}

int main() {
    int n = 6;
    int ar[] = {2, 7, 4, 1, 3, 5};
    sort(ar, n);
    for(int i = 0; i < n; ++i) cout << ar[i] << ' ';
    cout << '\n';
}


/* 
** Selection sort complexity:
** Best case : O(n^2)
** Avg case : O(n^2)
** Worst case : O(n^2)
*/