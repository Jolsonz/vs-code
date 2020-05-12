#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;
//求两个集合的和(并集)、差、交集
//set库提供set容器，iterator库提供迭代器，algorithm库提供集合操作(故也可以对其他容器进行集合操作)
int main()
{
    set<int> a, b;
    set<int> c, d, e;
    a.insert(1);
    a.insert(2);
    b.insert(2);
    b.insert(3);

    set_union(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<set<int>>(c, c.begin()));
    set_difference(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<set<int>>(d,d.begin()));
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), insert_iterator<set<int>>(e, e.begin()));

    cout << "a: ";
    for(auto i : a)
        cout << i << " ";
    cout << endl;

    cout << "b: ";
    for(auto i : b)
        cout << i << " ";
    cout << endl;

    cout << "c = a + b: ";
    for (auto i : c)
        cout << i << " ";
    cout << endl;

    cout << "d = a - b: ";
    for(auto i : d)
        cout << i << " ";
    cout << endl;

    cout << "e = a & b: ";
    for(auto i : e)
        cout << i << " ";
    cout << endl;

    return 0;
}