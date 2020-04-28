#include<bits/stdc++.h>
using namespace std;

class A
{
public:
void Func1(void);
};
void Test(A *a)
{
a->Func1();
}
class B : public A
{
void Func1
};
class C : public A
{
…
};
// Example
main()
{
A a;
B b;
C c;
Test(&a);
Test(&b);
Test(&c);
};