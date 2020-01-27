// -*- C++ -*-
/**
 * @author Dalton Yoder
 * @file NodeTest.h
 * @desc Node testing class.
 * @date 27 January 2020
 */
#ifndef NODE_TEST_
#define NODE_TEST_

#include <stdexcept>
#include <iostream>

#include "Node.h"

class NodeTest {
  private:
    int testCount;
    int passCount;
  public:
/**
 * CONSTRUCTOR/DECONSTRUCTOR
 */
    NodeTest();
    ~NodeTest();
/**
 * MEMBER FUNCTIONS
 */
    void printPassFail(bool);
    void run();
/**
 * TESTS
 */
    /* @brief getValue() returns right value. */
    void test1_getValue();
    /* @brief setValue() sets the correct value. */
    void test1_setValue();
    /* @brief getNext() returns null. */
    void test1_getNext();
    /* @brief setNext() sets the next node correctly. */
    void test1_setNext();
};
#endif
