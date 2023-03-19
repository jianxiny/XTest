//
// Created by cqs on 2023-03-17.
//

#include "../Log.h"
#include "LogTags.h"
#include "Util.h"


#include "../../Test.h"

TEST("Message can be tagged in log") {
    std::string  message = "simple tag";
    message += Util::randomString();
    Memo::log(error) << message;
    std::string logLevelTag= " log_level=\"error\" ";
    std::string defaultLevelTag= " log_level=\"info\" ";
    bool result = Util::isTextInFile(message, "application.log", {logLevelTag}, {defaultLevelTag});
    CONFIRM_TRUE(result);
}

TEST("log needs no namespace when used with LogLevel") {
    log(error) << "no namespace";
}

TEST("Default tags set in main appear in log") {
    std::string message = "default tag";
    message += Util::randomString();
    Memo::log() << message;
    std::string logLevelTag = " log_level=\"info\" ";
    std::string colorTag = " color=\"green\"";
    bool result = Util::isTextInFile(message, "application.log", {logLevelTag, colorTag});
    CONFIRM_TRUE(result);
}