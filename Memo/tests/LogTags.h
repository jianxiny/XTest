//
// Created by cqs on 2023-03-17.
//

#ifndef XTEST_LOGTAGS_H
#define XTEST_LOGTAGS_H

#include "../Log.h"


inline Memo::LogLevel error("error");
inline Memo::LogLevel info("info");
inline Memo::LogLevel debug("debug");

class Color : public Memo::Tag
{
public:
    Color (std::string const & text)
            : Tag("color", text)
    { }
    std::unique_ptr<Tag> clone () const override
    {
        return std::unique_ptr<Tag>(
                new Color(*this));
    }
};
inline Color red("red");
inline Color green("green");
inline Color blue("blue");

#endif //XTEST_LOGTAGS_H
