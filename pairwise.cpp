#include <cstdlib>
#include <iostream>
#include <vector>

#define string std::string
#define print(x) std::cout << x << std::endl;


long long maxPairwiseProduct(const std::vector<long long>& arr, int size) {
    long long max = 0;
    for (long long i : arr) {
        if (i > max) {
            max = i;
        }
    }
    long long secondMax = 0;
    for (long long i : arr) {
        if (i > secondMax && i != max) {
            secondMax = i;
        }
    }

    return secondMax * max;
}


long long maxPairwiseProductFast(const std::vector<long long>& arr, int size) {
    long long max = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if ((arr[i] * arr[j]) > max) {
                max = arr[i] * arr[j];
            }
        }
    }
    return max;
}


int main() {
//    while (true) {
//        int n = rand() % 10 + 10;
//        std::vector<long long> a;
//        for (int i = 0; i < n; ++i) {
//            a.push_back(rand() % 10000);
//        }
//        for (long long i : a) {
//            print(i);
//        }
//        long long res1 = maxPairwiseProduct(a, n);
//        long long res2 = maxPairwiseProductFast(a, n);
//        if (res1 != res2) {
//            print(res1 << ":" << res2);
//        } else {
//            print("OK");
//        }
//    }

    int n;
    std::cin >> n;
    std::vector<long long> arr;

    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        arr.push_back(a);
    }

    std::cout << maxPairwiseProduct(arr, n) << std::endl;
//    std::cout << maxPairwiseProductFast(arr, n) << std::endl;

    return 0;
}

