//g++ -std=c++17 -Wall -Wextra -Wpedantic -Weffc++ -Wold-style-cast test_main.o Time.cpp time_test.cc 
#include "catch.hpp"
#include "time.h"
#include <iostream>
#include <sstream>


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

    Time time{12,12,01};
    
    CHECK(toString(time + 5) == "12:12:06");
    CHECK_FALSE(toString(time + (-1)) == "12:12:11");
    CHECK_FALSE(toString(time + 5) == "hej");
    //CHECK_FALSE(time == time+5);

    CHECK(toString(time + 61) == "12:13:02");



}
TEST_CASE ("increment prefix"){

    Time time{12,12,12};
    ++time;

    CHECK(toString(time) == "12:12:13");
    CHECK_FALSE(toString(time) == "12:12:12");

}


TEST_CASE ("increment postfix"){

    Time time{12,12,12};
    time++;

    CHECK(toString(time++) == "12:12:13");
    CHECK_FALSE(toString(time++) == "12:12:12");

}

TEST_CASE ("equals") {
    Time time1{12,12,12};
    Time time2{12,12,12};
    Time time3{1,23,45};
    CHECK(time1 == time2);
    CHECK_FALSE(time1 == time3);
}
TEST_CASE ("not-equals") {
    Time time1{12,12,12};
    Time time2{12,12,12};
    Time time3{1,23,45};
    CHECK_FALSE(time1 != time2);
    CHECK(time1 != time3);
}
TEST_CASE("inequality") {
    Time time1{12,20,30};
    Time time2{12,40,20};
    Time time3{10,50,50};
    CHECK(time1 < time2);
    CHECK(time3 < time1);
    CHECK_FALSE(time1 < time1);
    CHECK_FALSE(time2 < time3);
    CHECK_FALSE(time1 > time2);
    CHECK_FALSE(time3 > time1);
    CHECK(time2 > time3);
    CHECK_FALSE(time1 > time1);

}
TEST_CASE("streams") {
    //Time time2{};
    //Time time1{12,20,30};
  

    std::istringstream iss("10:200:30"); // fake input with faulty data
    Time z{};
    iss >> z;
    CHECK(iss.fail()); // the input failed
    CHECK_FALSE(toString(z) == "10:20:30");


    std::istringstream iss2("10:20:30"); // fake input with faulty data
    Time x{};
    iss2 >> x;
    CHECK_FALSE(iss2.fail()); // the input failed
    CHECK(toString(x) == "10:20:30");

    std::ostringstream oss{};

    oss << x;
    CHECK(toString(x) == "10:20:30");
    CHECK_FALSE(toString(x) == "10:200:30");


}