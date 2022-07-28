#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
bool smallthan_5(T value) {
    return value < 5;
}

template<typename T>
bool equal_5(T value) {
    return value == 5;
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
	
    vector<int>::iterator it = find_if(v.begin(), v.end(), equal_5<int>);
    if (it != v.end())
        cout << "found " << *it << endl;
    else
        cout << "not find\n";

    return 0;
}