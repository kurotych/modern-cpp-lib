#include "../include/interface.h"

class API {
public:
    int _add(int a, int b) { return a + b; }
    int _sub(int a, int b) { return a - b; }
};
static API api;


int add(int a, int b) {
    return api._add(a, b);
}

int sub(int a, int b) {
    return api._sub(a, b);
}
