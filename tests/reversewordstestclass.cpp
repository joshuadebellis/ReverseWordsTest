/*
 * File:   reversewordstestclass.cpp
 * Author: josh
 *
 * Created on Sep 22, 2014, 5:30:14 PM
 */

#include "reversewordstestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(reversewordstestclass);

reversewordstestclass::reversewordstestclass() {
}

reversewordstestclass::~reversewordstestclass() {
}

void reversewordstestclass::setUp() {
}

void reversewordstestclass::tearDown() {
}

void reversewordstestclass::EmptyFileTest() {
    // An empty file should return no word pairs
    CPPUNIT_ASSERT(ReverseWords == ReverseWords(EmptyFile));
}




