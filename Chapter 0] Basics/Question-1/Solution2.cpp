#include <iostream> 

using namespace std; 

int main()
{
    int number = 0;
    cin >> number;      

    int sum = (number * (number + 1)) / 2;

    cout << sum;
    // This solution is better and has O(1) time complexity!

    /*
    We're using the formula:
        sum = n * (n + 1) / 2

    This formula gives the sum of the first 'n' natural numbers:
        1 + 2 + 3 + ... + n

    Why does it work?

    Imagine writing the sum forwards and backwards:
        S = 1 + 2 + 3 + ... + (n-1) + n
        S = n + (n-1) + (n-2) + ... + 2 + 1

    Add both lines:
        2S = (1 + n) + (2 + n-1) + (3 + n-2) + ... + (n + 1)

    Each pair sums to (n + 1), and there are 'n' pairs:
        2S = n * (n + 1)
         S = n * (n + 1) / 2

    Example:
        If n = 5:
            Sum = 5 * (5 + 1) / 2 = 30 / 2 = 15
            Which matches: 1 + 2 + 3 + 4 + 5 = 15 
*/
        
}
