#include "Shuffle.h"

// Initialize the static member
//array<int>^ Shuffle::lastUniqueNumbers;

// Implementation of the static property getter
array<int>^ Shuffle::LastUniqueNumbers::get() {
    return lastUniqueNumbers;
}

array<int>^ Shuffle::GenerateUniqueNumbers(int count, int maxNumber) {
    List<int>^ uniqueNumbers = gcnew List<int>();
    Random^ rand = gcnew Random();

    while (uniqueNumbers->Count < count) {
        int randomNumber = rand->Next(maxNumber); // Generate a number between 0 and maxNumber - 1
        if (!uniqueNumbers->Contains(randomNumber)) {
            uniqueNumbers->Add(randomNumber); // If not, add it to the list
        }
    }

    lastUniqueNumbers = uniqueNumbers->ToArray();
    return lastUniqueNumbers;
}
