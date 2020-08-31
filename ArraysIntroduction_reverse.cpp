#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, i = 0;
    std::cin >> N;
    int *A = new int[N];
    while (std::cin >> A[i++])
        ;
    while (std::cout << A[--N] << ' ' && N)
        ;
    delete[] A;
    return 0;
}
