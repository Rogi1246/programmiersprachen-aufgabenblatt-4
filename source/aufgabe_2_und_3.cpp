#include <algorithm>
#include <set>
#include <list>
#include <set>
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    list<unsigned int>randomList_;
    set<unsigned int> res_;
    vector<unsigned int>random_vector(100);


    cout << "random list :  \n";

    for(int i=0;i<=100;i++){
        unsigned int random = rand()%100;
        randomList_.push_back(random);
        cout << random << " . " ;
    }

    cout << '\n' << "missing : " << '\n' ;

    for(int i = 0; i<100; i++){
        if(find(randomList_.begin(), randomList_.end(), i) == randomList_.end()){
            res_.insert(i);
        }
    }

    for(auto const& element : res_){
        cout << '\n' << element << " . ";
    }

    for(int i = 0; i<100; i++){
        if(!(find(res_.begin(), res_.end(), i) != res_.end())){

            cout << '\n' << "frequency : " << '\n';
            cout << i << " : " << count(randomList_.begin(), randomList_.end(),i) << '\n' ;
        }
    }

    copy(randomList_.begin(), randomList_.end(), random_vector.begin());


    return 0;
}