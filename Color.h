#ifndef NUMBERCONVERSION_COLOR_H
#define NUMBERCONVERSION_COLOR_H

#include <string>

using namespace std;

class Color {
public:
    // Given an integer value, convert it to RGB and Hex values
    void SetValue(int value);

    void SetName(const char *name);

    // Accessors
    unsigned char GetR() const;

    unsigned char GetG() const;

    unsigned char GetB() const;

    string GetHexValue() const;

    string GetName() const;

    string name;
    int value;
    unsigned char R;
    unsigned char G;
    unsigned char B;
};


#endif //NUMBERCONVERSION_COLOR_H
