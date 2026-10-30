#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void bubbleSort(vector <int> & numbers) {
    for (int i = 0 ; i < numbers.size()-1 ; i++) {
        for (int j = 0 ; j < numbers.size()-1-i ; j++) {
            if (numbers[j] > numbers[j+1]) {
                swap(numbers[j] , numbers[j+1]) ;
            }
        }
    }
}

int main () {

    vector <int> numbers = {5, 2, 8, 1, 4} ;

    bubbleSort(numbers) ;

    cout << "BUBBLE SORT : " ;

    for (int i = 0 ; i < numbers.size() ; i++) {
        cout << numbers[i] << " " ;
    }

    return 0 ;
}