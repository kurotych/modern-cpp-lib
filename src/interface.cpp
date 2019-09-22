#include "../include/interface.h"

class API {
public:
    int _add(int a, int b) { return a + b; }
    int _sub(int a, int b) { return a - b; }

    // for cppcheck example
    int _warnFoo(int idx = 6) {
        int a[5] = {1,2,3,4,5};
        return a[idx];
    }
};
static API api;


int add(int a, int b) {
    return api._add(a, b);
}

int sub(int a, int b) {
    return api._sub(a, b);
}

int failFoo(int idx) {
    return api._warnFoo(idx);
}