#define CATCH_CONFIG_RUNNER
#include<catch.hpp>
#include<vector>
#include<algorithm>

#include"circle.hpp"

using namespace std;

TEST_CASE("function Template","[task 14]")
{
    vector<Circle>circleTest;
    vector<Circle>circleTest2(3);

    circleTest.push_back(Circle{8.0});
    circleTest.push_back(Circle{2.5f});
    circleTest.push_back(Circle{3.3f});
    circleTest.push_back(Circle{9.0f});
    circleTest.push_back(Circle{1.5f});

    copy_if(circleTest.begin(),circleTest.end(),circleTest2.begin(),[](Circle const& c){
        cout<<c.radius() << '\n';
        return c.radius() > 4.0f;});
        cout<<" __ " << '\n';

    REQUIRE(all_of(circleTest2.begin(),circleTest2.end(),[](Circle const& c){
        cout<<c.radius()<<"\n";
        return c.radius() > 3.0f;}));
}

int main(int argc, char *argv[])
{
    return Catch::Session().run(argc,argv);
}