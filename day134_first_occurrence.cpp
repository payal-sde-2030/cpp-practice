#include <iostream>
#include <vector>

using namespace std ;

int firstOccurrence(vector <int> & numbers , int target) {
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] == target) {
            return i ;
        }
    }
    return - 1;
}

int main () {

    vector <int> numbers = {4, 7, 2, 7, 9, 7} ;

    int target ;
    cout << "Enter Target : " ;
    cin >> target ;

    int index = firstOccurrence(numbers , target) ;
    
    if (index == -1) {
        cout << "Target Not Found" ;
    } 
    else {
        cout << "First Occurrence of " << target << " is " << index ;
    }

    return 0 ;

}