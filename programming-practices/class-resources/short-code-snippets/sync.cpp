#include <thread>
#include <assert.h>

int x = 0;

void foo()
{
    while (true)
    {
    	int count=x;
        x = x + 1;
        assert(count+1 == x);
    }
}

void foo1()
{
    while (true)
    {
    	int count=x;
        x = x - 1;
        assert(count-1 == x);
    }
}

int main()
{
    std::thread t(foo);
    std::thread t2(foo1);

    t.join();
    t2.join();
}