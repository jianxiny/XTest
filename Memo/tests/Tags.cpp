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
    std::string taggedMessage = " log_level=\"error\" ";
    taggedMessage += message;
    bool result = Util::isTextInFile(taggedMessage, "application.log");
    CONFIRM_TRUE(result);
}

TEST("log needs no namespace when used with LogLevel") {
    log(error) << "no namespace";
}