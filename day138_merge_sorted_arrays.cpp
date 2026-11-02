#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

vector <int> mergeSortedArray(vector <int> & a , vector <int> & b) {
    // creates an empty vector where we will store the merged element
    vector <int> result ;

    // i tracks elements of a
    // j tracks elements of b
    int i = 0 ;
    int j = 0 ;
    
    // loop continues while both vectors still have element
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]) ;
            i++ ;
        }
        else {
        result.push_back(b[j]) ; 
        j++ ;
       }
    }
    // copies any remaining elements from a
    while (i < a.size()) {
        result.push_back(a[i]) ;
        i++ ;
    } 
    // copies any remaining elements from b
    while (j < b.size()) {
        result.push_back(b[j]) ;
        j++ ;
    }
    return result ;
}

int main () {
    
    vector <int> a = {1, 3, 5} ;
    vector <int> b = {2, 4, 6} ;

    vector <int> merged = mergeSortedArray(a , b) ;

    // this is a range-based for loop. It visits each element of merged
    for (int x : merged) {
        cout << x << " " ;
    }

    return 0 ;
}