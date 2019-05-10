//
// Created by armatusmiles on 10.05.19.
//

#ifndef MODERNCPP_TEST_ADD_HPP
#define MODERNCPP_TEST_ADD_HPP
#include <catch.hpp>
#include <interface.h>

TEST_CASE( "Test add", "[single-file]" )
{
    REQUIRE(add(2,2) == 4);
}

#endif //MODERNCPP_TEST_ADD_HPP
