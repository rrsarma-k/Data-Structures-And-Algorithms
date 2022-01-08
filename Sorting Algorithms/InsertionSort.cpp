#include <iostream>
#include <climits>
using namespace std;

void sort1(int* ar, int n) {
    int br[n];
    int index = 0;
    for(int i = 0; i < n; ++i) {
        int key = ar[i];
        while(index < n && key < ar[index] && index++);
        --index;
        ar
    }
}

int main() {
    int n = 6;
    int ar[] = {2, 7, 4, 1, 3, 5};
    sort1(ar, n);
    for(int i = 0; i < n; ++i) cout << ar[i] << ' ';
    cout << '\n';
}


/* 
** Insertion sort complexity:
** Best case : O(n^2)
** Avg case : O(n^2)
** Worst case : O(n^2)
*/