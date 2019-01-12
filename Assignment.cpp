#include<iostream>
using namespace std;

// A function to check if n is palindrome
int isPalindrome(int n)
{
    // Find reverse of n
    int rev = 0;
    for (int i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;

    // If n and rev are same, then n is palindrome
    return (n==rev);
}

// prints palindrome between min and max
void countPal(int min, int max)
{
    for (int i = min; i <= max; i++)
        if (isPalindrome(i)){
          cout << i;
          break;
        }
}

// Driver program to test above function
int main()
{
    int p;
    cin >> p;
    countPal(p+1, 100000);
    return 0;
}

Test Case:

100
output
101
