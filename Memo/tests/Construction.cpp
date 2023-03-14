//
// Created by cqs on 2023-03-14.
//
#include "../Log.h"
#include "Util.h"
#include "../../Test.h"

TEST("Simple message can be logged") {
    std::string message = "simple";
    message += Util::randomString();

    Memo::log(message);

    bool  result = Util::isTextInFile(message, "application.log");
    CONFIRM_TRUE(result);
}