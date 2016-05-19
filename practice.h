
#ifndef CPP_PRACTICE_PRACTICE_H
#define CPP_PRACTICE_PRACTICE_H

#endif //CPP_PRACTICE_PRACTICE_H

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

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayBox(const box &);
void computeVolume(box &);

template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

box & getBigger(box & b1, box & b2);

void printItAgainSam(const char * message, int again = 0);

#include "practice.cpp"
