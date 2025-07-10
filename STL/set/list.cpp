#include <iostream>
#include <list>
using namespace std;

int main() {
    
    // link is implement as a doubly linked list
    list <int> l = {1,3};
    l.emplace_back(5);
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    l.pop_back();
    l.pop_front();
    for (int val : l) {
        cout << val << endl;
    }

    // size, erase , begin , end , rbegin, rend , insert , front , back

    return 0;

}