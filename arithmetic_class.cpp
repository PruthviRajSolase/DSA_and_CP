#include <iostream>
#include <cmath> // For sqrt() function

#include <string>

using namespace std;

class Arithmetic {
public:
    // Static method to check if a number is prime
     bool isPrime(int n) {
        if (n <= 1) return false; // 0 and 1 are not prime
        
        // Optimize: Check divisors up to square root of n
        for (int i = 2; i <= std::sqrt(n); ++i) {
            if (n % i == 0) {
                return false; // Found a divisor, not prime
            }
        }
        return true; // No divisors found, it's prime
    }

    bool ispalyndrome(int num){
            int Duplicate=num;

            string temp;
            while(Duplicate!=0){
                temp = temp + to_string(Duplicate % 10);
                Duplicate=Duplicate/10;

            }

            if(temp==to_string(num)){
                return true;
            }
            else
            return false;

    }
};


int main() {
    Arithmetic check;
    int num;
    /*
    std::cout << "Enter a number to check: ";
    std::cin >> num;

    if (check.isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

*/

    cout<<"Enter the number ";
    cin>>num;

    if(check.ispalyndrome(num)){
        cout<<"The number "<<num<<" is Palyndrome"<<endl;
    }
    else{
        cout<<"The number "<<num<<" is not Palyndrome"<<endl;
    }
    return 0;
}
