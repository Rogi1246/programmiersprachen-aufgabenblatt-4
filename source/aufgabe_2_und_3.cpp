#include <algorithm>
#include <list>
#include <iostream>

using namespace std;


int main()
{
    list<unsigned int> randomList;
    for(int i=0;i<=100;i++){
        randomList.push_back(rand());
    }

    for (list<unsigned int>::iterator it = randomList.begin(); it != randomList.end(); it++){
    cout << *it;

    }

    return 0;
}