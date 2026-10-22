#include <iostream>
#include <vector>

using namespace std ;
 
int countMatching(vector <int> numbers , int target) {
    int count = 0 ;
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] % 2 != 0 || numbers[i] > target) {
            count++ ;
        }
    }
    return count ;
}

int main () {

    vector <int> numbers = {3, 8, 11, 14, 17, 20, 23, 26} ;

    int target ;
    cout << "Enter Target : " ;
    cin >> target ;

    int result = countMatching(numbers , target) ;

    cout << "Count odd or greater than target : " << result ;

    return 0 ;
    
}