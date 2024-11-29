#ifndef __SHAPE__
#define __SHAPE__

#include <bits/stdc++.h>
#include <phosphor-logging/lg2.hpp>

using namespace std;

class shapes{
public:
    virtual void printShape() = 0; 
};

class circle : public shapes{
    void printShape();
};

class square : public shapes{
    void printShape();

};

class logging{
    public:
    void l2g_logs();
};

#endif