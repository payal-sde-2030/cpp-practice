#include <iostream>
#include <vector>

using namespace std ;

void moveZeros(vector <int> & numbers) {
    int index = 0 ;
    for (int i = 0 ; i < numbers.size() ; i++) {
        // to check non zero numbers
        if (numbers[i] != 0) {
            // to write that non zero numbers in the blank space ahead
            numbers[index] = numbers[i] ;
            index++ ;
        }
    }
    for (int i = index ; i < numbers.size() ; i++) {
        // replaces each remaining element with zero
        numbers[i] = 0 ;
    }
}

int main () {

    vector <int> numbers = {0, 5, 0, 3, 8, 0, 2} ;

    moveZeros(numbers) ;

    for (int i = 0 ; i < numbers.size() ; i++) {
        cout << numbers[i] << " " ;
    }

    return 0 ;

}