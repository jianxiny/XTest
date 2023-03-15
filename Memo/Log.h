//
// Created by cqs on 2023-03-14.
//

#ifndef MEMO_LOG_H
#define MEMO_LOG_H

#include <fstream>
#include <iostream>
#include <string_view>
#include <chrono>
#include <ctime>
#include <iomanip>

namespace Memo {
    inline std::fstream log() {
        auto const now = std::chrono::system_clock::now();
        std::time_t const tmNow = std::chrono::system_clock::to_time_t(now);
        auto const ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
        std::fstream logFile("application.log", std::ios::app);
        logFile << std::endl
                << std::put_time(std::gmtime(&tmNow), "%Y-%m-%dT%H:%M:%S.")
                << std::setw(3) << std::setfill('0') << std::to_string(ms.count())
                << " ";
        return logFile;
    }
}// namespace Memo
#endif //MEMO_LOG_H
