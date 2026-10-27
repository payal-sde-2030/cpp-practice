#include <iostream>
#include <vector>

using namespace std ;

int countOccurrences(vector <int> numbers , int target) {
    int count = 0 ;
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] == target) {
            count++ ;
        }
    }
    return count ;
}

int main () {

    vector <int> numbers = {4, 7, 2, 7, 9, 7} ;

    int target ;
    cout << "Enter Target : " ;
    cin >> target ;

    int result = countOccurrences(numbers , target) ; 

    cout << "Count Occurrences of " << target << " is " << result ;

    return 0 ;

}