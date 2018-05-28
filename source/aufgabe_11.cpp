#define CATCH_CONFIG_RUNNER

#include <cmath>
#include <algorithm>
#include <vector>

#include "catch.hpp"

using namespace std;

bool is_multiple_of_3(int i){
    return i%3==0;
}

TEST_CASE ("filter multiples of 3", "[erase]")
{
    vector<unsigned int> v(100);

    for(int i=0; i<100; i++){
        unsigned int random1=rand()%100;
        v.push_back(random1);
    }

    v.erase(remove_if(v.begin(), v.end(), [](int const& i){
        return (i%3)!=0;}), v.end());

REQUIRE (std :: all_of (v. begin (), v.end (), is_multiple_of_3 ));
}


int main (int argc , char * argv [])
{
    return Catch :: Session (). run(argc , argv );
}