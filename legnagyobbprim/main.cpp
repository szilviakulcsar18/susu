#include <iostream>
#include <cmath>
using namespace std;

bool prim(long long n, long long i){
    if (i > sqrt(n)) {
       return true;}
    if (n % i == 0) {
       return false;}
    return prim(n, i + 1);
}

bool isPrime(long long n){
    if (n < 2) return false;
    return prim(n, 2);
}

int main(){
    long long N;
    cin >> N;
    for(long long x = N; x >= 2; x--){
        if(isPrime(x)){
            cout << x;
            return 0;
        }
    }
}
