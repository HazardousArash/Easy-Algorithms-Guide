#include <iostream> 

using namespace std; 

int main() 
{
    int number = 0;       
    cin >> number;        

    int sum = 0;          // Do not forget to initialize sum to 0

    // Loop from 1 to the input number to add 1,....n to sum
    for (int i = 1; i <= number; ++i)
    {
        sum += i;         // Add the current value of i to sum which starts from 1 and ends with n
    }

    cout << sum;          // Output the final sum

    // Atention: This solution suffers from O(n) time complexity, Check out solution 2 for O(1) complexity!
}
