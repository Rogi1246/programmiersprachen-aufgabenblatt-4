#define CATCH_CONFIG_RUNNER
#include<algorithm>
#include<catch.hpp>
#include<functional>
#include<vector>

bool is_even(int i){
    return i % 2 == 0;
}

template<typename SeqContainer, typename Predicate>
SeqContainer filter(SeqContainer const& container, Predicate const& predicate){

    SeqContainer resulting;
    for(auto it = container.begin(); it!=container.end(); it++){
        if(predicate(*it)){
            resulting.push_back(*it);
        }
    }
    return resulting;
};

TEST_CASE("functionTempl", "[task 13]"){

    std :: vector <int > v{1 ,2 ,3 ,4 ,5 ,6};
    std :: vector <int > v2(10);
    v2 = filter(v, is_even);

    REQUIRE(std::all_of(v2.begin(),v2.end(),is_even));
}

int main(int argc, char *argv[])
{
    return Catch::Session().run(argc,argv);
}