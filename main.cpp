#include <iostream>
#include <cmath>

using namespace std;

void doMath();
void testCout();
void showRandom();
int getAge();
void printAge(int age);
void showTypeSizes();
void funWithEscaping();
void narrowing();

int main() {

    testCout();
    doMath();
    showRandom();
//    int age = getAge();
//    printAge(age);
    showTypeSizes();
//    funWithEscaping();
    narrowing();

    return EXIT_SUCCESS;
}

void testCout()
{
    int carrots = 25;

    cout << "Hello, World! I have " << carrots << " carrots!" << endl;

    cout << "Ate one, now " << --carrots << " carrots." <<endl;
}

void doMath()
{

    double target = 6.25;
    double root = sqrt(target);

    cout << "The square root of " << target << " is: " << root << endl;

    double base = 5;
    double exp = 8;
    double powered = pow(base, exp);

    cout << "The base " << base << " raised to the power of " << exp << " is " << powered << endl;
}

void showRandom()
{
    cout << "Here's a random integer: " << rand() << endl;
}

int getAge()
{

    int age;

    cout << "Enter your age: ";
    cin >> age;

    return age;
}

void printAge(int age)
{
    cout << "Wow, " << age << ", huh? That's " << age * 12 <<  " months." << endl;

//    cout << "and age is stored here: " << &age << endl;
}

void showTypeSizes()
{
    int int_size = sizeof(int);
    int byte_size = CHAR_BIT;
    int max_int = INT_MAX;
    short max_short = SHRT_MAX;
    long max_long = LONG_MAX;
    long long max_llong = LLONG_MAX;

    cout << "int in bytes: " << int_size << endl;
    cout << "bits to a char: " << byte_size << endl;
    cout << "max int: " << max_int << endl;
    cout << "max short: " << max_short << endl;
    cout << "max long: " << max_long << endl;
    cout << "max long long: " << max_llong << endl;
}

void funWithEscaping()
{
    cout << "Enter a number: ________\b\b\b\b\b\b\b\b";  // back up on the underscores

    int secretNumber;
    cin >> secretNumber;

    cout << "Verified." << endl;
}

void narrowing()
{
    const int x = 66;
    //int y = 67;
    int cans {6};
    //int weight {12.03};
    int weight {12};
    char c = {x};
    //char d = {y}; // will not work because y is not const

    cout << "Total weight (" << c << ") = " << cans * weight << endl;
}