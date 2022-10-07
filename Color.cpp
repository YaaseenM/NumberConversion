#include "Color.h"


void Color::SetValue(int value) {
    this->value = value;
    short uValue = 255;
    this->value &= uValue;
    B = this->value;
    this->value = value;
    this->value >>= 8;
    this->value &= uValue;
    G = this->value;
    this->value = value;
    this->value >>= 16;
    this->value &= uValue;
    R = this->value;
}

void Color::SetName(const char *name) {
    this->name = name;
}

unsigned char Color::GetR() const {
    return R;
}

unsigned char Color::GetG() const {
    return G;
}

unsigned char Color::GetB() const {
    return B;
}

string Color::GetName() const {
    return this->name;
}

string Color::GetHexValue() const {
    string hexValue;
    string R1 = to_string(GetR() / 16);
    if (R1 == "10") {
        R1 = "A";
    } else if (R1 == "11") {
        R1 = "B";
    } else if (R1 == "12") {
        R1 = "C";
    } else if (R1 == "13") {
        R1 = "D";
    } else if (R1 == "14") {
        R1 = "E";
    } else if (R1 == "15") {
        R1 = "F";
    }
    string R2 = to_string(GetR() % 16);
    if (R2 == "10") {
        R2 = "A";
    } else if (R2 == "11") {
        R2 = "B";
    } else if (R2 == "12") {
        R2 = "C";
    } else if (R2 == "13") {
        R2 = "D";
    } else if (R2 == "14") {
        R2 = "E";
    } else if (R2 == "15") {
        R2 = "F";
    }
    string G1 = to_string(GetG() / 16);
    if (G1 == "10") {
        G1 = "A";
    } else if (G1 == "11") {
        G1 = "B";
    } else if (G1 == "12") {
        G1 = "C";
    } else if (G1 == "13") {
        G1 = "D";
    } else if (G1 == "14") {
        G1 = "E";
    } else if (G1 == "15") {
        G1 = "F";
    }
    string G2 = to_string(GetG() % 16);
    if (G2 == "10") {
        G2 = "A";
    } else if (G2 == "11") {
        G2 = "B";
    } else if (G2 == "12") {
        G2 = "C";
    } else if (G2 == "13") {
        G2 = "D";
    } else if (G2 == "14") {
        G2 = "E";
    } else if (G2 == "15") {
        G2 = "F";
    }
    string B1 = to_string(GetB() / 16);
    if (B1 == "10") {
        B1 = "A";
    } else if (B1 == "11") {
        B1 = "B";
    } else if (B1 == "12") {
        B1 = "C";
    } else if (B1 == "13") {
        B1 = "D";
    } else if (B1 == "14") {
        B1 = "E";
    } else if (B1 == "15") {
        B1 = "F";
    }
    string B2 = to_string(GetB() % 16);
    if (B2 == "10") {
        B2 = "A";
    } else if (B2 == "11") {
        B2 = "B";
    } else if (B2 == "12") {
        B2 = "C";
    } else if (B2 == "13") {
        B2 = "D";
    } else if (B2 == "14") {
        B2 = "E";
    } else if (B2 == "15") {
        B2 = "F";
    }
    hexValue = "0x" + R1 + R2 + G1 + G2 + B1 + B2;
    return hexValue;
}

