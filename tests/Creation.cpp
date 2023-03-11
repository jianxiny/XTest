//
// Created by cqs on 2023-03-11.
//
#include "../Test.h"

Test("Test can be created") {};

Test("Test that throws unexpectedly can be created") {
    setExpectedFailureReason(
            "Unexpected exception thrown."
            );
    throw "Unexpected";
}

Test("Test that should throw unexpectedly can be created") {
    setExpectedFailureReason(
            "Unexpected exception thrown."
            );
}

TEST_EX("Test with throw can be created", int) {
    throw 1;
}

TEST_EX("Test that never throws can be created", int) {
  setExpectedFailureReason(
          "Expected exception type int was not thrown."
          );
}

TEST_EX("Test that throws wrong type can be created", int) {
    setExpectedFailureReason(
            "Unexpected exception thrown."
            );
    throw "Wrong type";
}