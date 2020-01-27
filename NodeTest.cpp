// -*- C++ -*-
/**
 * @author Dalton Yoder
 * @file NodeTest.cpp
 * @desc Node testing class.
 * @date 27 January 2020
 */
#include "NodeTest.h"

NodeTest::NodeTest() {
  testCount = 0;
  passCount = 0;
}

NodeTest::~NodeTest() {}

void NodeTest::printPassFail(bool passed) {
  if(passed) {
    std::cout<<"PASSED\n";
    passCount++;
  } else {
    std::cout<<"FAILED\n";
  }
  testCount++;
}

void NodeTest::run() {
  std::cout<<"================================================================\n"
           <<"                  TEST SUITE FOR NODE                   \n"
           <<"================================================================\n";
  test1_getValue();

  test1_setValue();

  test1_getNext();

  test1_setNext();
  std::cout<<"----------------------------------------------------------------\n"
           <<"Tests Completed -> " << testCount <<"\n"
           <<"Tests Passed -> " << passCount <<"\n"
           <<"----------------------------------------------------------------\n";
}

void NodeTest::test1_getValue() {
  Node<int> myNode(5);
  std::cout<<"TEST 1: getValue() returns right value. --> ";
  printPassFail(myNode.getValue() == 5);
}

void NodeTest::test1_setValue() {
  Node<int> myNode(1);
  myNode.setValue(5);
  std::cout<<"TEST 2: setValue() sets the correct value. --> ";
  printPassFail(myNode.getValue() == 5);
}

void NodeTest::test1_getNext() {
  Node<int> myNode(5);
  std::cout<<"TEST 3: getNext() returns null initially. --> ";
  printPassFail(myNode.getNext() == nullptr);
}

void NodeTest::test1_setNext() {
  Node<int> node1(1);
  Node<int>* node2 = new Node<int>(2);
  node1.setNext(node2);

  Node<int>* nodeTest = node1.getNext();
  std::cout<<"TEST 4: setNext() sets the next node correctly. --> ";
  printPassFail(nodeTest->getValue() == 2);
  delete node2;
  delete nodeTest;
}
