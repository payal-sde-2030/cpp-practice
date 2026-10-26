# include <iostream>
# include <vector>

using namespace std ; 

int linearSearch(vector <int> & numbers , int target) {
    for (int i = 0 ; i < numbers.size() ; i++) {
        if (numbers[i] == target) {
            return i;
        }
    }
    return - 1 ;
}

int main () {

    vector <int> numbers = {10 , 25 , 7, 40 , 15} ;

    int target ;
    cout << "Enter Target : " ;
    cin >> target ;

    int index = linearSearch(numbers , target) ;

    if (index == -1) {
        cout << "Target not found" ;
    }
    else {
        cout << "Index of " << target << " is " << index ;
    }

    return 0 ;

}