#include <algorithm>
#include <set>
#include <list>
#include <iostream>
#include <random>

using namespace std;


int main()
{
    list<unsigned int> randomList_;
    set<unsigned int>  res_;


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

    return 0;
}