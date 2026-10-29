#include <iostream>
#include <vector>

using namespace std ;

int findMax(vector <int> & numbers) {
    int max = numbers[0] ;
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] > max) {
            max = numbers[i] ;
        }
    }
    return max ;
}
int findMin(vector <int> & numbers) {
    int min = numbers[0] ;
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] < min) {
            min = numbers[i] ;
        }
    }
    return min ;
}

int main () {

    vector <int> numbers = {14, 3, 27, 8, 11, 2}  ;

    int minimum = findMin(numbers) ;
    int maximum = findMax(numbers) ;

    cout << "MINIMUM : " << minimum << endl ;
    cout << "MAXIMUM : " << maximum ;

    return 0 ;

}
