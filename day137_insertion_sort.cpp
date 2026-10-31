#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void insertionSort(vector <int> & numbers) {
    for (int i = 1 ; i < numbers.size() ; i++) { 
        int key = numbers[i] ;
        int j = i-1 ;  
        while (j >= 0 && numbers[j] > key) {
            numbers[j+1] = numbers[j] ;
            j-- ;
        }
        numbers[j+1] = key ;
    }
}

int main () {

    vector <int> numbers = {-5, -2, -9, -1, -7} ;

    insertionSort(numbers) ;

    for (int x : numbers) {
        cout << x << " " ;
    }
    return 0 ;
}