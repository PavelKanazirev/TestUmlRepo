#include <iostream>

#include "QmTest.hpp"

QmTest::QmTest(){ std::cout <<__PRETTY_FUNCTION__<<std::endl;};
QmTest::~QmTest(){ std::cout <<__PRETTY_FUNCTION__<<std::endl;};

 bool QmTest::run()
 {
    bool result = false;
    std::cout <<__PRETTY_FUNCTION__<<std::endl;

    return result;
 }
