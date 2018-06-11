#define CATCH_CONFIG_RUNNER

#include "catch.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

#include "List.hpp"

using namespace std;

TEST_CASE("constructors", "[List]")
{
    List<int> list1;
    list1.push_front(14);
    list1.push_front(0);
    list1.push_front(7);

    REQUIRE(list1.head() == 7);

    List<int> list2{list1};
    REQUIRE(list2 == list1);

    List<int> list3;
    REQUIRE(list3.is_empty());
    REQUIRE(list3.size() == 0);
}

TEST_CASE("modifiers", "[List]")
{

    SECTION("adding and removing w/ push/pop_front")
    {
        List<int> list1;
        list1.push_front(69);
        list1.push_front(70);
        list1.pop_front();
        REQUIRE(69 == list1.head());

        list1.pop_front();
        REQUIRE(list1.is_empty());
    }

    SECTION("adding and removing w/ push/pop_back")
    {
        List<int> list2;
        list2.push_back(13);
        list2.push_back(31);
        list2.pop_back();
        REQUIRE(13 == list2.tail());

        list2.pop_back();
        REQUIRE(list2.is_empty());
    }

    SECTION("clearingList")
    {
        List<int> list3{20, 14, 33, 97};
        list3.clear();
        REQUIRE(list3.is_empty());
    }

    SECTION("reversing")
    {
        List<int> list4{12, 1, 5, 87, 103};
        List<int> list5 = reverse(list4);

        REQUIRE(103 == list5.head());
        REQUIRE(12 == list5.tail());
    }
}

TEST_CASE("summingLists", "[List]")
{
    List<int> list2;
    List<int> list3{11, 22, 33};
    List<int> list1 = list2 + list3;

    list2.push_back(1);
    list2.push_back(4);
    list2.push_back(2);
    REQUIRE(1 == list1.head());
    REQUIRE(33 == list1.tail());
    REQUIRE(6 == list1.size());
}

TEST_CASE("assignment", "[List]")
{
    List<int> list1{10, 11, 12, 13};
    List<int> list2{1, 2, 3};
    list2 = list1;
    REQUIRE(list2.head() == 10);
    REQUIRE(list2.tail() == 13);
    REQUIRE(list2.size() == 4);
}

TEST_CASE (" copy constructor ", "[ constructor ]")
{
List <int > list ;
list.push_front (1);
list.push_front (2);
list.push_front (3);
list.push_front (4);
List <int > list2 { list };
REQUIRE( list == list2 );
}

TEST_CASE (" move constructor ", "[ constructor ]")
{
    List <int > list ;
    list.push_front (1);
    list.push_front (2);
    list.push_front (3);
    list.push_front (4);
    List<int > list2 = std :: move ( list );
    REQUIRE (0 == list . size ());
    REQUIRE (list.is_empty ());
    REQUIRE (4 == list2 . size ());
}

int main(int argc, char *argv[])
{
    return Catch::Session().run(argc, argv);
}