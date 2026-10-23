#include <iostream>
#include <vector>

using namespace std ;

int findSecondLarget(vector <int> numbers) {
    
int largest = numbers[0] ;
int secondLargest =  0 ;
bool foundSecond = false ;

    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest ;
            largest = numbers[i] ;
            foundSecond = true ;
        }
        else if (numbers[i] < largest && numbers[i] > secondLargest) {
            secondLargest = numbers[i] ;
        }
    }
    return secondLargest ;
}

int main () {

    vector <int> numbers = {5, 5, 4, 4, 3} ;

    int result = findSecondLarget(numbers) ;

    cout << "Second Largest no. is : " << result ;

    return 0 ;
}
