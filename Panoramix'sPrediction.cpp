// C++ program to find the prime numbers
// between a given interval
#include<iostream>
using namespace std;

int main()
{
    // Declare the variables
    int a, b, i, j, flag, count=0;
    int temp;

    // Ask user to enter lower value of interval

    cin >> a; // Take input

    // Ask user to enter upper value of interval

    cin >> b; // Take input

    // Print display message


    // Traverse each number in the interval
    // with the help of for loop

    for (i = a+1; i <= b; i++) {
        // Skip 0 and 1 as they are
        // neither prime nor composite
        if (i == 1 || i == 0)
            continue;

        // flag variable to tell
        // if i is prime or not
        flag = 1;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1){

            temp=i;
            count++;
        }
    }

    if(count==2){
        cout<<"NO";
    }else if (count==1 && b==temp){
        cout<<"YES";

    }else
        cout<<"NO";


    return 0;
}


