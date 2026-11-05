#include <iostream>
#include <vector>

using namespace std ;

void rotateLeft(vector <int> & numbers) {

    if (numbers.empty()) {
        return ;
    }

    int first = numbers[0] ;
    for (int i = 0 ; i < numbers.size()-1 ; i++) {
        (numbers[i] = numbers[i+1]) ;
    }
    numbers[numbers.size() - 1] = first ;
}

int main () {

    vector <int> numbers = {10, 20, 30, 40, 50} ;

    rotateLeft(numbers) ;

    for (int i = 0 ; i < numbers.size() ; i++) {
        cout << numbers[i] << " " ;
    }

    return 0 ;

}