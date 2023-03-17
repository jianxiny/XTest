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

    class Tag {
    public:
        virtual ~Tag() = default;

        std::string key() const {
            return mKey;
        }

        std::string text() const {
            return mText;
        }


    protected:
        Tag(std::string const &key, std::string const &value)
                : mKey(key), mText(key + "=\"" + value + "\"") {

        }

    private:
        std::string mKey;
        std::string mText;
    };

    class LogLevel: public Tag {
    public:
        LogLevel(std::string const & text)
        : Tag("log_level", text){}
    };

    inline std::string to_string(Tag const & tag) {
        return tag.text();
    }

    inline std::fstream log(std::string_view preMessage = "") {
        // timestamp support
        auto const now = std::chrono::system_clock::now();
        std::time_t const tmNow = std::chrono::system_clock::to_time_t(now);
        auto const ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
        std::fstream logFile("application.log", std::ios::app);
        logFile << std::endl
                << std::put_time(std::gmtime(&tmNow), "%Y-%m-%dT%H:%M:%S.")
                << std::setw(3) << std::setfill('0') << std::to_string(ms.count())
                << " " << preMessage << " ";
        return logFile;
    }

    inline std::fstream log(Tag const & tag) {
        return log(to_string(tag));
    }
}// namespace Memo
#endif //MEMO_LOG_H
