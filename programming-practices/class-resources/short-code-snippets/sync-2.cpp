#include <thread>
#include <assert.h>
#include <iostream>
#include <mutex>          

using namespace std;

std::mutex mtx;

int x = 0;

void foo()
{
    while (true)
    {
    	mtx.lock();
    	int count=x;
        x = x + 1;
        cout<<"foo "<<x<<"\n";
        assert(count+1 == x);
        mtx.unlock();
    }
}

void foo1()
{
    while (true)
    {
    	mtx.lock();
    	int count=x;
        x = x - 1;
        cout<<"foo1 "<<x<<"\n";
        assert(count-1 == x);
        mtx.unlock();	
    }
}

int main()
{
    std::thread t(foo1);
    std::thread t2(foo);

    t.join();
    t2.join();
}