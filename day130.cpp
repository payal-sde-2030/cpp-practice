#include <iostream>
#include <vector>

using namespace std ;

    int countEvenGreater(vector <int> & numbers , int target) {
        int count = 0 ;
        for (int i = 0 ; i < numbers.size() ; i++) {
            if (numbers[i] > target && numbers[i] % 2 == 0) {
                count++ ;
            }
        }
        return count ;
    }
    
    int main () {

        vector <int> numbers = {4, 7, 10, 13, 16, 19, 22, 25} ;

        int target ;
        cout << "Enter Target : " ;
        cin >> target ;

        int result = countEvenGreater(numbers , target) ;

        cout << "Count even and greater : " << result ;

        return 0 ;
    }