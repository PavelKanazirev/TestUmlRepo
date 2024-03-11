#include <iostream>

#include "../Qm.hpp"
#include "../Asil.hpp"
#include "QmTest.hpp"
#include "AsilTest.hpp"

int main(int argc, char *argv[])
{
    QmTest qmUnitTests;
    AsilTest asilUnitTests;

    qmUnitTests.run();
    asilUnitTests.run();

    system("pause");

    return 0;
}