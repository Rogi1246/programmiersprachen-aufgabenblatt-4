#include <algorithm>
#include <set>
#include <list>
#include <iostream>
#include <random>

using namespace std;


int main()
{
    list<unsigned int> randomList;
    set<unsigned int>  res;


    cout << "random list :  \n";

    for(int i=0;i<=100;i++){
        unsigned int random = rand()%100;
        randomList.push_back(random);
        cout << random << " . " ;
    }

    cout << '\n' << "missing : " << '\n' ;

    for(int i = 0; i<100; i++){
        if(find(randomList.begin(), randomList.end(), i) == randomList.end()){
            res.insert(i);
        }
    }

    for(auto const& element : res){
        cout << '\n' << element << " . ";
    }

    for(int i = 0; i<100; i++){
        if(!(find(res.begin(), res.end(), i) != res.end())){

            cout << '\n' << "frequency : " << '\n';
            cout << i << " : " << count(randomList.begin(), randomList.end(),i) << '\n' ;
        }
    }

    return 0;
}