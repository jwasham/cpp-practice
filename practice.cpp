#include <cmath>
#include <vector>
#include <array>
#include <string>
#include <cctype>

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

    cout << "Another raw string..." << endl;
    cout << R"(A newline looks like \n and a null terminator looks like \0.)" << endl;
}

void makeStruct() {

    struct automobile {
        float length;
        float width;
        float height;
        float weight;
        int horsepower;
        int year;
        string make;
        string model;
    };

    automobile jeep = {
            184.4,
            73.7,
            72.6,
            4521, // lbs
            285,  // hp
            2015,
            "",
            ""
    };

    jeep.make = "Jeep";
    jeep.model = "Wrangler";

    cout << "It's a " << jeep.year << " " << jeep.make << " " << jeep.model << "." << endl;
}

void getToThePointer() {

    int * numbers = new int[3];
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;

    cout << "The second number is: " << numbers[1] << endl;
    cout << "The memory address for numbers (a pointer) is: " << numbers << endl;

    cout << "Doing a little pointer math..." << endl;

    cout << "The first number is: " << *numbers << endl;
    cout << "The second number is: " << *(numbers + 1) << endl;
    cout << "The third number is: " << *(numbers + 2) << endl;

    cout << "Freeing up memory on the heap..." << endl;

    delete [] numbers;

    cout << "Making more numbers..." << endl;

    int moreNumbers[3] {150, 250, 350};

    cout << "The second number is: " << moreNumbers[1] << endl;
    cout << "The memory address for moreNumbers (an array) is: " << (int *) moreNumbers << endl;

    // no need to free stack memory
}

void whatsYourVector() {

    vector<int> iv {1, 3, 5, 7, 9};
    int addendum = 11;

    cout << "vector starts with: " << iv.front() << endl;
    cout << "vector ends with: " << iv.back() << endl;
    cout << "adding to vector... " << endl;
    iv.push_back(addendum);
    cout << "vector ends with: " << iv.back() << endl;
    cout << "removing first element from vector... " << endl;
    iv.erase(iv.begin());
    cout << "vector starts with: " << iv.front() << endl;

    // compared to array

    cout << "now some array fun... " << endl;

    array<int, 5> ia {1, 3, 5, 7, 9};

    cout << "array starts with: " << ia.front() << endl;
    cout << "array ends with: " << ia.back() << endl;
}

/**
 * C++11 range-based loops
 */
void rangeLoop() {

    vector<int> temperatures {13, 53, 64, 56, 14, 25};

    for (int i: temperatures) {
        cout << "Range item: " << i << endl;
    }

    double lengths[3] {463.2, 774.5, 836.3};

    for (double &i: lengths) {
        // will mutate lengths as a reference
        i = i * 1.27;
        cout << "New length: " << i << endl;
    }
}

void inputTests() {

    char ch;
    char changed;
    string log {""};

    cout << "Enter a few letters. I'll uppercase them or lowercase them <0 to quit>: " << endl;

    while (cin.get(ch) and ch != '0') {

        if (isupper(ch)) {
            changed = tolower(ch);
        } else if (islower(ch)) {
            changed = toupper(ch);
        } else {
            changed = ch;
        }

        log += ch;

        cout << changed;
    }

    cout << "All done then. You entered: " << log << endl;
}

void functionSignatures() {

    int n = 6;
    double d = 5.2;
    string name = "Todd";

    iquote(n);
    iquote(d);
    iquote(name);

    box movingBox = {
        "U-Haul",
        3.6,
        2.8,
        4.5
        // omitting volume - will be set to 0
    };

    displayBox(movingBox);

    computeVolume(movingBox);

    displayBox(movingBox);

    // template

    double d1 { 6.5 };
    double d2 { 3.2 };

    cout << "Larger double is " << larger(d1, d2) << endl;

    int i1 = 13;
    int i2 = 98;

    cout << "Larger integer is " << larger(i1, i2) << endl;

    box otherBox = {
        "Home Depot",
        12.8,
        1.1,
        4.1
        // omitting volume - will be set to 0
    };

    computeVolume(otherBox);

    box & larger = getBigger(movingBox, otherBox);

    cout << "Larger box is: " << larger.maker << " at " << larger.volume << endl;
}

void iquote(int n) {
    cout << '"' << n << '"' << endl;
}

void iquote(double d) {
    cout << '"' << d << '"' << endl;
}

void iquote(string s) {
    cout << '"' << s << '"' << endl;
}

void displayBox(const box & b) {
    cout << "Maker: " << b.maker << endl
         << "Height: " << b.height << endl
         << "Width: " << b.width << endl
         << "Length: " << b.length << endl
         << "Volume: " << b.volume << endl;
}

void computeVolume(box & b) {
    b.volume = b.length * b.width * b.height;
}

box & getBigger(box & b1, box & b2) {
    return (b1.volume > b2.volume) ? b1 : b2;
}

void functionSignaturesMore() {

    printItAgainSam("hello");
    printItAgainSam("hello", 1);
    printItAgainSam("hello", 1);
}

void printItAgainSam(const char * message, int again) {

    static int count = 0;
    count++;

    int times = 1;

    if (again > 0) {
        times = count;
    }

    cout << "printing " << times << " times." << endl;

    while (times--) {
        cout << message << endl;
    }
}

void candyTime() {
    CandyBar yumBar {};

    buildABar(yumBar);
    showCandy(yumBar);

    CandyBar newBar {};

    buildABar(newBar, "SuperYums", 6.4, 425);
    showCandy(newBar);
}

void buildABar(CandyBar & bar, char * name, double weight, int calories) {

    strcpy(bar.brand, name);
    bar.weight = weight;
    bar.calories = calories;
}

void showCandy(const CandyBar & bar) {
    cout << bar.brand << " - weight: " << bar.weight << " ounces, calories: " << bar.calories << endl;
}

void testMaxN() {
    int textInts[] {23, 35, 7, 2};

    int maxInt = maxn(textInts, 4);
    assert(maxInt == 35);

    cout << "Max int: " << maxInt << endl;

    double testDbls[] {0.2, 43.2, 0.002, 5.2, 9.3, 12.4};

    double maxDbl = maxn(testDbls, 6);
    assert(maxDbl == 43.2);
    cout << "Max double: " << maxDbl << endl;

    char w1[] = "hello";
    char w2[] = "friends";
    char w3[] = "top";
    char w4[] = "fellow";

    const char * words[4] {
        w1,
        w2,
        w3,
        w4
    };

    const char * result = maxn(words, 4);

    cout << "longest strings is: " << result << endl;
}
