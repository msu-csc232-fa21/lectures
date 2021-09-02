/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2021
 *
 * @file     test.cpp
 * @authors  Jim Daehn <jdaehn@missouristate.edu>
 * @brief    HW01 Unit test implementation -- DO NOT MODIFY THIS FILE!!!
 */

#include <catch2/catch_test_macros.hpp>
#include "csc232.h"

SCENARIO("Place Holder", "[place_holder]")
{
    GIVEN("Some context")
    {
        int a{ 1 };
        int b{ 2 };

        WHEN("We receive some stimulus")
        {
            int result{ a + b };

            THEN("We require some response")
            {
                REQUIRE(result == 3);
            }
        }
    }
}
