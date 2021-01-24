#include "../thirdparty/ctest.h"
#include "../src/lib.hpp"
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

CTEST(lib, rename)
{
    int exp1 = 0; 
    int exp2 = -1;
    int res;

    res = rename("../test/2.txt", "../test/3.txt");

    if (res != 0) {
        ASSERT_EQUAL(exp2, res);
    } else {
        ASSERT_EQUAL(exp1, res);
    }
}

CTEST(lib, remove)
{
    int exp1 = 0; 
    int exp2 = -1;
    int res;

    res = remove("../test/3.txt");

    if (res != 0) {
        ASSERT_EQUAL(exp2, res);
    } else {
        ASSERT_EQUAL(exp1, res);
    }

}

CTEST(lib, copyFile)
{
    int exp1 = 0; 
    int exp2 = -1;
    int res;

    res = copyFile("../test/1.txt", "../test/4.txt");

    if (res != 0) {
        ASSERT_EQUAL(exp2, res);
    } else {
        ASSERT_EQUAL(exp1, res);
    }
}
