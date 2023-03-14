//
// Created by cqs on 2023-03-11.
//

#include "../Test.h"

bool isPassingGrade(int value) {
    return false;
}

Test("Test will passed without any confirms") {}

Test("Test passing grade") {
    bool result = isPassingGrade(0);
    if (result) {
        throw MereTDD::BoolConfirmException(false, 17);
    }
    result = isPassingGrade(100);
    if (not result) {
        throw MereTDD::BoolConfirmException(true, 17);
    }
}