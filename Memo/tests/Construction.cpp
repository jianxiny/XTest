//
// Created by cqs on 2023-03-14.
//
#include "../Log.h"
#include "Util.h"
#include "../../Test.h"

TEST("Simple message can be logged") {
    std::string message = "simple";
    message += Util::randomString();

    Memo::log() << message << " with more text";

    bool  result = Util::isTextInFile(message, "application.log");
    CONFIRM_TRUE(result);
}

TEST("Complicated message can be logged")
{
    std::string message = "complicated ";
    message += Util::randomString();
    Memo::log() << message
            << " double=" << 3.14
            << " quoted=" << std::quoted("in quotes");
    bool result = Util::isTextInFile(message,
                                     "application.log");
    CONFIRM_TRUE(result);
}