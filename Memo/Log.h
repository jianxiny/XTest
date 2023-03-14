//
// Created by cqs on 2023-03-14.
//

#ifndef MEMO_LOG_H
#define MEMO_LOG_H

#include <fstream>
#include <iostream>
#include <string_view>

namespace Memo {
    inline void log(std::string_view message) {
        std::fstream logFile("application.log", std::ios::app);
        logFile << message <<std::endl;
    }
}// namespace Memo
#endif //MEMO_LOG_H
