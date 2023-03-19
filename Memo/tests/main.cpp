//
// Created by cqs on 2023-03-14.
//
#include <iostream>
#include "../../Test.h"
#include "../Log.h"
#include "LogTags.h"


int main () {
    Memo::addDefaultTag(info);
    Memo::addDefaultTag(green);
    return MereTDD::runTests(std::cout);
}