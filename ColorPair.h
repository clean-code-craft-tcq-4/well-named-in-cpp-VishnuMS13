#include "TelCoColorCoder.h"
using namespace TelCoColorCoder;

class ColorPair {
private:
    MajorColor majorColor;
    MinorColor minorColor;
public:
    ColorPair(MajorColor major, MinorColor minor):
        majorColor(major), minorColor(minor)
    {}
    MajorColor getMajor() {
        return majorColor;
    }
    MinorColor getMinor() {
        return minorColor;
    }
    std::string ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
};