#pragma once

using namespace System;
using namespace System::Collections::Generic;

public ref class Shuffle {
public:
    // Declaration of the static property
    static property array<int>^ LastUniqueNumbers {
        array<int>^ get();
    }

    static array<int>^ GenerateUniqueNumbers(int count, int maxNumber);

private:
    static array<int>^ lastUniqueNumbers;
};
