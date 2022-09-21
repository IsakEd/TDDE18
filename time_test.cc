//g++ -std=c++17 -Wall -Wextra -Wpedantic -Weffc++ -Wold-style-cast test_main.o Time.cpp time_test.cc 
#include "catch.hpp"
#include "time.h"
#include <iostream>


TEST_CASE ("Time valid") {

    Time time1{12,12,12};
    Time time2{123,124,142};

    CHECK(is_valid(time1));
    CHECK_FALSE(is_valid(time2));
}
TEST_CASE ("is_am"){

    Time time1{8,12,12};
    Time time2{13,12,14};

    CHECK(is_am(time1));
    CHECK_FALSE(is_am(time2));


}
TEST_CASE ("toString") {

    Time time1{12,12,12};
    Time time2{12,12,14};

    std::string str{"12:12:12"};

    CHECK(toString(time1) == str);
    CHECK_FALSE(toString(time2) == str);

}
TEST_CASE ("add") {

    Time time{12,12,1};
    
    CHECK(toString(time + 5) == "12:12:6");
    CHECK_FALSE(toString(time + (-1)) == "12:12:11");
    CHECK_FALSE(toString(time + 5) == "hej");
    //CHECK_FALSE(time == time+5);
}
TEST_CASE ("equals") {
    Time time1{12,12,12};
    Time time2{12,12,12};
    Time time3{1,23,45};
    CHECK(time1 == time2);
}