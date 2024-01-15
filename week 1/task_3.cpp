#include <iostream>

using namespace std;

int mod = 1791791791;
long long int NextRand(long long cur, int a, int b) {
    cur = (cur * a + b) % mod;
    return cur;
}

int main(){
    // пишем код здесь
    return 0;
}


