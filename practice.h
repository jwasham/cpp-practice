
#ifndef CPP_PRACTICE_PRACTICE_H
#define CPP_PRACTICE_PRACTICE_H

#endif //CPP_PRACTICE_PRACTICE_H

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

struct CandyBar
{
    char brand[20];
    double weight;
    int calories;
};

void doMath();
void testCout();
void showRandom();
int getAge();
void printAge(int age);
void showTypeSizes();
void funWithEscaping();
void narrowing();
void typeCasting();
void autoTyping();
void secondsToTime();
void stringPractice();
void makeStruct();
void getToThePointer();
void whatsYourVector();
void rangeLoop();
void inputTests();
void functionSignatures();
void functionSignaturesMore();

// these are used by functionSignatures
void iquote(int);
void iquote(double);
void iquote(std::string);
void displayBox(const box &);
void computeVolume(box &);

template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

box & getBigger(box & b1, box & b2);

void printItAgainSam(const char * message, int again = 0);

void candyTime();
void buildABar(CandyBar & bar, char * name = "Millennium Munch", double weight = 2.85, int calories = 350);
void showCandy(const CandyBar &);

void testMaxN();

template <class T>
T maxn(T arr[], int count) {

    T max = 0;

    std::cout << "running maxn" << std::endl;

    for (int i = 0; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

template <>
const char * maxn(const char * arr[], int count) {

    const char * longest = arr[0];
    int longestLength = 0;

    std::cout << "-------" << std::endl;

    for (int i = 0; i < count; i++) {
        std::cout << "Checking: " << arr[i] << std::endl;
        int length = strlen(arr[i]);
        if (length > longestLength) {
            longest = arr[i];
            longestLength = length;
        }
    }

    return longest;
}

#include "practice.cpp"
