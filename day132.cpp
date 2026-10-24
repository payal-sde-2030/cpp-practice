#include <iostream>
#include <vector>

using namespace std ;

int countFrequency(vector <int> numbers ,int target) {
    int count = 0 ;
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] == target) {
            count++ ;
        }
    }
    return count ;
}

int main () {

    vector <int> numbers = {2, 5, 2, 8, 5, 2, 9} ;

    int target ;
    cout << "Enter Target = " ;
    cin >> target ;

    int result = countFrequency(numbers , target) ;

    cout << "Count Frequency of " << target << " is " << result ;

    return 0 ;
    
}