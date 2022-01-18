#include <iostream>
#include <climits>
using namespace std;

// Complexity: O(n^2).
void sort1(int* ar, int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 1; ++j) {
            if(ar[j] > ar[j + 1]) swap(ar[j], ar[j + 1]);
        }
    }
}

// If we observe carefully in sort1, at each pass(for one time outer loop), the last element
// is the maximum one. So no need to compare those values.

// Complexity: still O(n^2), but optimised.
void sort2(int* ar, int n) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - 1 - i; ++j) {
            if(ar[j] > ar[j + 1]) swap(ar[j], ar[j + 1]);
        }
    }
}

// If we observe carefully sometimes array will be sorted at few passes only, like in this ex:
/*
    2 7 4 1 3 5
    pass 1 : {2 4 1 3 5 7}
    pass 2 : {2 1 3 4 5 7}
    pass 3 : {1 2 3 4 5 7}

    Here n is 6 but after 3 passes array is sorted. still we're looping 
    in sort2() even after sorted.
    Means if the condition in inner loop(ar[j] > ar[j+1]) does not execute for atleast one pass
    then array is sorted.
    Then we can come out of the main loop.
*/
// Complexity: still O(n^2), but optimised, which results less iterations in best case(even
// with the array is sorted).
void sort(int* ar, int n) {
    for(int i = 0; i < n; ++i) {
        bool flag = false;
        for(int j = 0; j < n - 1 - i; ++j) {
            if(ar[j] > ar[j + 1]) {
                swap(ar[j], ar[j + 1]);
                flag = true;
            }
        }
        if(flag == false) break;
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
** Bubble sort complexity:
** Best case : O(n)
** Avg case : O(n^2)
** Worst case : O(n^2)
*/