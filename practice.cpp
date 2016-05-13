#include <cmath>

using namespace std;

void testCout() {
    int carrots = 25;

    cout << "Hello, World! I have " << carrots << " carrots!" << endl;

    cout << "Ate one, now " << --carrots << " carrots." <<endl;
}

void doMath() {

    double target = 6.25;
    double root = sqrt(target);

    cout << "The square root of " << target << " is: " << root << endl;

    double base = 5;
    double exp = 8;
    double powered = pow(base, exp);

    cout << "The base " << base << " raised to the power of " << exp << " is " << powered << endl;
}

void showRandom() {
    cout << "Here's a random integer: " << rand() << endl;
}

int getAge() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    return age;
}

void printAge(int age) {
    cout << "Wow, " << age << ", huh? That's " << age * 12 <<  " months." << endl;

//    cout << "and age is stored here: " << &age << endl;
}

void showTypeSizes() {
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

void funWithEscaping() {
    cout << "Enter a number: ________\b\b\b\b\b\b\b\b";  // back up on the underscores

    int secretNumber;
    cin >> secretNumber;

    cout << "Verified." << endl;
}

void narrowing() {
    const int x = 66;
    //int y = 67;
    int cans {6};
    //int weight {12.03};
    int weight {12};
    char c = {x};
    //char d = {y}; // will not work because y is not const

    cout << "Total weight (" << c << ") = " << cans * weight << endl;
}

void typeCasting() {
    const double t1 {12.94159159159159};
    const double t2 {12.99};

    int total = t1 + t2;

    int otherTotal = int(t1) + int(t2);

    cout << "total = " << total << " - cast after addition." << endl;
    cout << "other = " << otherTotal << " - cast before addition." << endl;

    char c {'M'};
    cout << "The character code for " << c << " is " << int(c) << endl;

    cout << "Doing restrictive type casting now..." << endl;

    int foo1 = static_cast<int>(t1);
    float foo2 = static_cast<float>(t1);

    cout << "foo1<int> is " << foo1 << endl;
    cout << "foo2<float> is " << foo2 << endl;

    const int someNum {88};
    cout << "The letter for " << someNum << " is: " << static_cast<char>(someNum) << endl;

    char myc {someNum};
    cout << "The letter for " << someNum << " is: " << myc << endl;

}

void autoTyping() {
    auto thing1 = 245.5;
    auto thing2 = 12345.59234L;
    auto thing3 = 0;
    // auto thing4 = U'/U00002155'; // wchar_t
    auto thing5 = 8.25f / 2.5; // double
}

void secondsToTime() {

    const int secondsPerMinute {60};
    const int secondsPerHour {secondsPerMinute * 60};
    const int secondsPerDay {secondsPerHour * 24};

    int inputSeconds {0};

    cout << "Enter the number of seconds to convert: ";
    cin >> inputSeconds;

    cout << inputSeconds << " seconds = "
    << inputSeconds/secondsPerDay << " days, "
    << (inputSeconds % secondsPerDay) / secondsPerHour << " hours, "
    << (inputSeconds % secondsPerHour) / secondsPerMinute << " minutes, "
    << inputSeconds % secondsPerMinute << " seconds, "
    << endl;
}

void stringPractice() {

    char name[] { "Reginald" };

    string lastName { "Filbertson" };

    cout << "The name is: " << name << " " << lastName << endl;
    cout << "lastName is " << lastName.size() << " characters." << endl;

    cout << "Changing the first and last characters of lastName..." << endl;

    lastName[0] = 'G';
    lastName[lastName.length() - 1] = 'x';
    cout << "Now the name is: " << name << " " << lastName << endl;

    cout << "Changing the first and last characters of name (C-style string)..." << endl;

    name[0] = 'Z';
    int nameLength = sizeof name / sizeof name[0];
    cout << "name length is " << nameLength << endl;
    name[nameLength - 2] = 'a'; // - 2 to account for null character \0
    cout << "Now the name is: " << name << " " << lastName << endl;

    cout << "Let's make him fancy." << endl;
    lastName += " II";
    cout << "Now the name is: " << name << " " << lastName << endl;

    cout << "Now a raw string..." << endl;
    cout << R"("Ew, I think this string is raw," she said.)" << endl; // thanks C++11
}