//
// Created by cqs on 2023-03-14.
//

#ifndef Memo_UTIL_H
#define Memo_UTIL_H
#include <string>
#include <string_view>

struct Util{
    static std::string randomString();
    static bool isTextInFile(std::string_view text, std::string_view fileName);
};

#endif //Memo_UTIL_H
