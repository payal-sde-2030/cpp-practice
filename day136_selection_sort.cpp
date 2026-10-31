#include <iostream>
#include <vector>
#include <algorithm>

using namespace std ;

void selectionSort(vector <int> & numbers) {
    for (int i = 0 ; i < numbers.size()-1 ; i++) {
        int minIndex = i ;
        for (int j = i+1 ; j < numbers.size() ; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j ;
            }
        }
        swap(numbers[i] , numbers[minIndex]) ;
    }
}

int main () {

    vector <int> numbers = {29, 10, 14, 37, 13} ;

    selectionSort(numbers) ;

    cout << "SELECTION SORT : " ;

    for (int i = 0 ; i < numbers.size() ; i++) {
        cout << numbers[i] << " " ;
    }

    return 0 ;

}