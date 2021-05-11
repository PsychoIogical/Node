// -*- C++ -*-
/**
 * @author Dalton Yoder
 * @file main.cpp
 * @desc main for NodeTest
 * @date 27 January 2020
 */
#include "NodeTest.h"

int main() {
  NodeTest* test = new NodeTest();
  test->run();

  delete test;
  return 0;
}
