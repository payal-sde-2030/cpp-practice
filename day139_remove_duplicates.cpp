#include <iostream>
#include <vector>

using namespace std ;

void removeDuplicates(vector <int> & numbers) {
    int i = 1 ;
    while (i < numbers.size())
    {
       if (numbers[i] == numbers[i-1]) {
        numbers.erase(numbers.begin() + i) ;
       }
       else {
        i++ ;
       }
    } 
}

int main () {

    vector <int> numbers = {1, 1, 2, 2, 3, 4, 4, 5} ;

    removeDuplicates(numbers) ;

    for (int i = 0 ; i < numbers.size() ; i++) {
        cout << numbers[i] << " " ;
    }

    return 0 ;

}