#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool more_than(int i)
{
    if (i > 7)
        return true;
    else
        return false;
}

int main()
{
    vector v = make_random_vector(10, 0, 10);
    for (const int& e : v) {
        cout << e << " ";
    }

    cout << endl;

    sort(v.begin(), v.end(), greater< int >());

    for (const int& e : v) {
        cout << e << " ";
    }

    cout << endl;

    cout << count(v.begin(), v.end(), 7) << endl;

    cout << count_if(v.begin(), v.end(), more_than) << endl;

    int tres;
    cin >> tres;
    auto treshold = [&](double x) { return x > tres; };
    cout << count_if(v.begin(), v.end(), treshold) << endl;


    string my_string;
    cin >> my_string;

    
}
