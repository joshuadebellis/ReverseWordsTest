/*
 * File:   reversewordstestclass.h
 * Author: josh
 *
 * Created on Sep 22, 2014, 5:30:14 PM
 */

#ifndef REVERSEWORDSTESTCLASS_H
#define	REVERSEWORDSTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class reversewordstestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(reversewordstestclass);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    reversewordstestclass();
    virtual ~reversewordstestclass();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* REVERSEWORDSTESTCLASS_H */

